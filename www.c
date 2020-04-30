#include <arpa/inet.h>
#include <dirent.h>
#include <fcntl.h>
#include <inttypes.h>
#include <netinet/in.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/sendfile.h>
#include <sys/socket.h>
#include <sys/stat.h>
#include <sys/types.h> 
#include <sys/wait.h>
#include <time.h>
#include <unistd.h>

#include "logger.h"

/**
 * Generates an HTTP 1.1 compliant timestamp for use in HTTP responses.
 *
 * Inputs:
 *  - timestamp: character pointer to a string buffer to be filled with the
 *    timestamp.
 */
void generate_timestamp(char *timestamp)
{
    time_t now = time(0);
    struct tm time = *gmtime(&now);
    strftime(timestamp, sizeof(timestamp), "%a, %d %b %Y %H:%M:%S %Z", &time);
}

/**
 * Reads from a file descriptor until:
 *  - the newline ('\n') character is encountered
 *  - *length* is exceeded
 *  This is helpful for reading HTTP headers line by line.
 *
 * Inputs:
 *  - fd: file descriptor to read from
 *  - buf: buffer to store data read from *fd*
 *  - length: maximum capacity of the buffer
 *
 * Returns:
 *  - Number of bytes read;
 *  - -1 on read failure
 *  - 0 on EOF
 */
ssize_t read_line(int fd, char *buf, size_t length)
{
    // TODO
    return 0;
}

/**
 * TODO: reads an HTTP 1.1 request and responds with the appropriate file (or
 * 404 if the file does not exist).
 */
int handle_request(int fd)
{
    // TODO
    return 0;
}

int main(int argc, char *argv[]) {

    if (argc != 3) {
        printf("Usage: %s port dir\n", argv[0]);
        return 1;
    }

    int port = atoi(argv[1]);
    char *dir = argv[2];

    /* TODO:
     *  - Create server socket
     *  - Bind to the specified port
     *  - Listen for incoming connections
     */

    return 0; 
}
