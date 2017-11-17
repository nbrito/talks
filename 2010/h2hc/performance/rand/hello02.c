/* 
 * $Id: hello02.c,v 1.1 2010-06-16 07:08:51-03 nbrito Exp $
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
#ifndef HELLO02_C__
#define HELLO02_C__ 1

#include <common.h>

void loop(short rand_number_16_bit){
	rand_number_16_bit = 1 + (short)(65535.0 * rand() / (RAND_MAX + 1.0));
}

int main(int argc, char ** argv){
	int   c = NUMBER_OF_LOOPS;
	float seconds = 0;
	short rand_number_16_bit = 0;

        gettimeofday(&start, (struct timezone *)0);

	srand((unsigned) start.tv_usec);

	while(c--)
		loop(rand_number_16_bit);

        gettimeofday(&stop, (struct timezone *)0);

        seconds = (stop.tv_sec - start.tv_sec) + (stop.tv_usec - start.tv_usec)/1000000.0;

	printf("[%s] 16-bit PRN generated %d times in %.6fs.\n", program_name, NUMBER_OF_LOOPS, seconds);

	exit(0);
}
#endif  /* HELLO02_C__ */
