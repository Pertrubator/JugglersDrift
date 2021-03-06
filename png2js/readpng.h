#ifndef H_READPNG
 #define H_READPNG

#ifdef __cplusplus
 extern "C" {
#endif

/* Read a PNG image file from "fname", using routines from libpng.
 * Returns 0 on success, or negative on various failures:
 *   -1: Can't open file
 *   -2: File is not PNG, or file is corrupt
 *   -3: Can't malloc a big enough image buffer
 *   -4: PNG image data is neither grayscale nor RGB (unsupported format)
 */
int ReadPNG(const char *fname, unsigned char (**data)[3], int *w, int *h);

/* Write a PNG image file to "fname", using routines from libpng.
 * Returns 0 on success, or negative on various failures:
 *   -1: Can't open file
 *   -2: Internal libpng error (maybe can't happen)
 *   -3: Can't malloc a big enough buffer for something
 */
int WritePNG(const char *fname, unsigned char (*data)[3], int w, int h);

#ifdef __cplusplus
 };
#endif

#endif /* H_READPNG */
