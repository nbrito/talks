/* 
 * $Id: common.h,v 1.1 2010-06-16 07:09:39-03 nbrito Exp $
 */

/* ------------------x------------------x------------------x------------------
 * Author: Nelson Brito <nbrito[at]sekure[dot]org>
 *
 * Copyright (c) 2010 Nelson Brito. All rights reserved worldwide.
 *
 * This source code is part of example codes demonstrated during H2HC Seventh
 * Edition (November 27th/28th, 2010 / São Paulo / Brazil).
 * ------------------x------------------x------------------x------------------
                                  The Hangover
    A "modern" high performance approach to build an offensive computing tool

                         Copyright (c) 2010 Nelson Brito
                               All Rights Reserved

     THIS SOFTWARE  IS PROVIDED  ``AS IS'',  WITHOUT  WARRANTY OF ANY KIND,
     EXPRESS  OR  IMPLIED, INCLUDING BUT NOT  LIMITED  TO THE WARRANTIES OF
     MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
     IN NO  EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS  BE LIABLE FOR ANY
     CLAIM, DAMAGES  OR OTHER LIABILITY,  WHETHER IN AN ACTION OF CONTRACT,
     TORT  OR OTHERWISE,  ARISING FROM,  OUT OF  OR IN CONNECTION  WITH THE
     SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
   
   ------------------x------------------x------------------x------------------ */
#ifndef __COMMON_H
#define __COMMON_H 1

#include <stdio.h>        /* printf(3)             */
#include <string.h>       /* memset(3) & memcpy(3) */
#include <stdlib.h>       /* malloc(3) & exit (3)  */
#include <signal.h>       /* signal(2) & kill(2)   */
#include <unistd.h>       /* getpid(2) & alarm(2)  */
#include <sys/time.h>     /* gettimeofday(2)       */

#ifdef __cplusplus
extern "C" {
#endif

__BEGIN_DECLS

char * copy_string = "hello world";
struct timeval start, stop;

static char * program_name = 
#ifdef  HELLO01_C__
	"hello01";
#endif  /* HELLO01_C__ */

#ifdef  HELLO02_C__
	"hello02";
#endif  /* HELLO02_C__ */

#ifdef  HELLO03_C__
	"hello03";
#endif  /* HELLO03_C__ */

#ifdef  HELLO04_C__
	"hello04";
#endif  /* HELLO04_C__ */

#ifdef  HELLO05_C__
	"hello05";
#endif  /* HELLO05_C__ */

#ifdef  HELLO06_C__
	"hello06";
#endif  /* HELLO06_C__ */



#define MAX_BYTES_TO_COPY strlen(copy_string)
#define NUMBER_OF_LOOPS   1000000

__END_DECLS

#ifdef __cplusplus
}
#endif

#endif  /* __COMMON_H */

