package com.gdg.utils;

import java.nio.ByteBuffer;

public class Wrapper {
    static{
        System.loadLibrary("gdggdx");
    }
    //BufferUtils 563
    public static native ByteBuffer newDisposableByteBuffer (int numBytes);
    //BufferUtils 559
    public static native void freeMemory (ByteBuffer buffer);
    
    //ETC1 221
    public static native int getWidthPKM (ByteBuffer header, int offset);
    //ETC1 228
    public static native int getHeightPKM (ByteBuffer header, int offset);
    //ETC1 248
    public static native void decodeImage (ByteBuffer compressedData, int offset, ByteBuffer decodedData, int offsetDec, int width, int height, int pixelSize);
      
    //Gdx2DPixmap 285
    public static native ByteBuffer newPixmap (long[] nativeData, int width, int height, int format);
    //Gdx2DPixmap 305
    public static native void clear (long pixmap, int color);
    //Gdx2DPixmap 346
    public static native void setBlend (int blend);
    //Gdx2DPixmap 351
    public static native void setScale (int scale);
    //Gdx2DPixmap 341
    public static native void drawPixmap (long src, long dst, int srcX, int srcY, int srcWidth, int srcHeight, int dstX, int dstY, int dstWidth, int dstHeight);
    //Gdx2DPixmap 301
    public static native void free (long pixmap);
    //Gdx2DPixmap 267
    public static native ByteBuffer load (long[] nativeData, byte[] buffer, int offset, int len);
}











