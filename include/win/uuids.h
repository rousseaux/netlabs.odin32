#ifndef __WINE_DSHOW_UUIDS_H
#define __WINE_DSHOW_UUIDS_H

#include "wine/obj_base.h"

/* FIXME - many GUIDs should be defined in this header. */

/* This macro must be defined for debugging... */
#ifndef	OUR_GUID_ENTRY
#define	OUR_GUID_ENTRY(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
		DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8);
#endif	/* OUR_GUID_ENTRY */

#define	MEDIATYPE_NULL		GUID_NULL
#define	MEDIASUBTYPE_NULL	GUID_NULL

/* --- Media Type --- */
OUR_GUID_ENTRY(MEDIATYPE_Video,0x73646976,
	0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIATYPE_Audio,0x73647561,
	0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIATYPE_Interleaved,0x73766169,
	0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIATYPE_File,0x656c6966,
	0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIATYPE_Text,0x73747874,
	0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIATYPE_Midi,0x7364696D,
	0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIATYPE_URL_STREAM,0x736c7275,
	0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)

OUR_GUID_ENTRY(MEDIATYPE_Stream,0xe436eb83,0x524f,0x11ce,0x9f,0x53,0x00,0x20,0xaf,0x0b,0xa7,0x70)


/* --- Media SubType --- */

/* FourCC */
OUR_GUID_ENTRY(MEDIASUBTYPE_YUYV,0x56595559,
	0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_IYUV,0x56555949,
	0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_YVU9,0x39555659,
	0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_Y411,0x31313459,
	0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_Y41P,0x50313459,
	0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_YUY2,0x32595559,
	0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_YVYU,0x55595659,
	0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_UYVY,0x59565955,
	0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_Y211,0x31313259,
	0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_YV12,0x32315659,
	0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)

/* RGB */
OUR_GUID_ENTRY(MEDIASUBTYPE_RGB1,0xe436eb78,0x524f,0x11ce,0x9f,0x53,0x00,0x20,0xaf,0x0b,0xa7,0x70)
OUR_GUID_ENTRY(MEDIASUBTYPE_RGB4,0xe436eb79,0x524f,0x11ce,0x9f,0x53,0x00,0x20,0xaf,0x0b,0xa7,0x70)
OUR_GUID_ENTRY(MEDIASUBTYPE_RGB8,0xe436eb7a,0x524f,0x11ce,0x9f,0x53,0x00,0x20,0xaf,0x0b,0xa7,0x70)
OUR_GUID_ENTRY(MEDIASUBTYPE_RGB555,0xe436eb7c,0x524f,0x11ce,0x9f,0x53,0x00,0x20,0xaf,0x0b,0xa7,0x70)
OUR_GUID_ENTRY(MEDIASUBTYPE_RGB565,0xe436eb7b,0x524f,0x11ce,0x9f,0x53,0x00,0x20,0xaf,0x0b,0xa7,0x70)
OUR_GUID_ENTRY(MEDIASUBTYPE_RGB24,0xe436eb7d,0x524f,0x11ce,0x9f,0x53,0x00,0x20,0xaf,0x0b,0xa7,0x70)
OUR_GUID_ENTRY(MEDIASUBTYPE_RGB32,0xe436eb7e,0x524f,0x11ce,0x9f,0x53,0x00,0x20,0xaf,0x0b,0xa7,0x70)
OUR_GUID_ENTRY(MEDIASUBTYPE_ARGB32,0x773c9ac0,0x3274,0x11d0,0xb7,0x24,0x00,0xaa,0x00,0x6c,0x1a,0x01)

/* Audio */
OUR_GUID_ENTRY(MEDIASUBTYPE_PCM,0x00000001,
	0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)

/* Stream */
OUR_GUID_ENTRY(MEDIASUBTYPE_Avi,0xe436eb88,0x524f,0x11ce,0x9f,0x53,0x00,0x20,0xaf,0x0b,0xa7,0x70)
OUR_GUID_ENTRY(MEDIASUBTYPE_QTMovie,0xE436EB89,0x524F,0x11CE,0x9F,0x53,0x00,0x20,0xAF,0x0B,0xA7,0x70)
OUR_GUID_ENTRY(MEDIATYPE_MPEG1SystemStream,0xE436EB82,0x524F,0x11CE,0x9F,0x53,0x00,0x20,0xAF,0x0B,0xA7,0x70)
OUR_GUID_ENTRY(MEDIASUBTYPE_WAVE,0xe436eb8b,0x524f,0x11ce,0x9f,0x53,0x00,0x20,0xaf,0x0b,0xa7,0x70)
OUR_GUID_ENTRY(MEDIASUBTYPE_AU,0xe436eb8c,0x524f,0x11ce,0x9f,0x53,0x00,0x20,0xaf,0x0b,0xa7,0x70)
OUR_GUID_ENTRY(MEDIASUBTYPE_AIFF,0xe436eb8d,0x524f,0x11ce,0x9f,0x53,0x00,0x20,0xaf,0x0b,0xa7,0x70)

OUR_GUID_ENTRY(MEDIASUBTYPE_QTRpza,
	0x617A7072,0x0000,0x0010,0x80,0x00,0x00,0xAA,0x00,0x38,0x9B,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_QTSmc,
	0x20636D73,0x0000,0x0010,0x80,0x00,0x00,0xAA,0x00,0x38,0x9B,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_QTRle,
	0x20656C72,0x0000,0x0010,0x80,0x00,0x00,0xAA,0x00,0x38,0x9B,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_QTJpeg,
	0x6765706A,0x0000,0x0010,0x80,0x00,0x00,0xAA,0x00,0x38,0x9B,0x71)

OUR_GUID_ENTRY(MEDIASUBTYPE_MPEG1System,
	0xE436EB84,0x524F,0x11CE,0x9F,0x53,0x00,0x20,0xAF,0x0B,0xA7,0x70)
OUR_GUID_ENTRY(MEDIASUBTYPE_MPEG1Video,
	0xE436EB86,0x524F,0x11CE,0x9F,0x53,0x00,0x20,0xAF,0x0B,0xA7,0x70)
OUR_GUID_ENTRY(MEDIASUBTYPE_MPEG1Audio,
	0xE436EB87,0x524F,0x11CE,0x9F,0x53,0x00,0x20,0xAF,0x0B,0xA7,0x70)
OUR_GUID_ENTRY(MEDIASUBTYPE_MPEG1Packet,
	0xE436EB80,0x524F,0x11CE,0x9F,0x53,0x00,0x20,0xAF,0x0B,0xA7,0x70)
OUR_GUID_ENTRY(MEDIASUBTYPE_MPEG1Payload,
	0xE436EB81,0x524F,0x11CE,0x9F,0x53,0x00,0x20,0xAF,0x0B,0xA7,0x70)
OUR_GUID_ENTRY(MEDIASUBTYPE_MPEG1AudioPayload,
	0x00000050,0x0000,0x0010,0x80,0x00,0x00,0xAA,0x00,0x38,0x9B,0x71)


/* --- Format Type --- */
OUR_GUID_ENTRY(FORMAT_None,
	0x0F6417D6,0xc318,0x11d0,0xa4,0x3f,0x00,0xa0,0xc9,0x22,0x31,0x96)
OUR_GUID_ENTRY(FORMAT_VideoInfo,
	0x05589f80,0xc356,0x11ce,0xbf,0x01,0x00,0xaa,0x00,0x55,0x59,0x5a)
OUR_GUID_ENTRY(FORMAT_VideoInfo2,
	0xf72a76A0,0xeb0a,0x11d0,0xac,0xe4,0x00,0x00,0xc0,0xcc,0x16,0xba)
OUR_GUID_ENTRY(FORMAT_WaveFormatEx,
	0x05589f81,0xc356,0x11ce,0xbf,0x01,0x00,0xaa,0x00,0x55,0x59,0x5a)


/* --- CLSIDs --- */

/* CaptureGraphBuilder  */
OUR_GUID_ENTRY(CLSID_CaptureGraphBuilder,
	0xBF87B6E0,0x8C27,0x11D0,0xB3,0xF0,0x00,0xAA,0x00,0x37,0x61,0xC5)
OUR_GUID_ENTRY(CLSID_CaptureGraphBuilder2,
	0xBF87B6E1,0x8C27,0x11D0,0xB3,0xF0,0x00,0xAA,0x00,0x37,0x61,0xC5)

/* System Reference Clock */
OUR_GUID_ENTRY(CLSID_SystemClock,
	0xe436ebb1,0x524f,0x11ce,0x9f,0x53,0x00,0x20,0xaf,0x0b,0xa7,0x70)
/* Filter Mapper */
OUR_GUID_ENTRY(CLSID_FilterMapper,
	0xe436ebb2,0x524f,0x11ce,0x9f,0x53,0x00,0x20,0xaf,0x0b,0xa7,0x70)
OUR_GUID_ENTRY(CLSID_FilterMapper2,
	0xCDA42200,0xBD88,0x11D0,0xBD,0x4E,0x00,0xA0,0xC9,0x11,0xCE,0x86)
/* Filter Graph */
OUR_GUID_ENTRY(CLSID_FilterGraph,
	0xe436ebb3,0x524f,0x11ce,0x9f,0x53,0x00,0x20,0xaf,0x0b,0xa7,0x70)
/* AVI Splitter */
OUR_GUID_ENTRY(CLSID_AviSplitter,
	0x1b544c20,0xfd0b,0x11ce,0x8c,0x63,0x00,0xaa,0x00,0x44,0xb5,0x1e)
/* AVI Reader */
OUR_GUID_ENTRY(CLSID_AviReader,
	0x1b544c21,0xfd0b,0x11ce,0x8c,0x63,0x00,0xaa,0x00,0x44,0xb5,0x1e)
/* Video Renderer */
OUR_GUID_ENTRY(CLSID_VideoRenderer,
	0x70e102b0,0x5556,0x11ce,0x97,0xc0,0x00,0xaa,0x00,0x55,0x59,0x5a)
/* Audio Renderer */
OUR_GUID_ENTRY(CLSID_AudioRender,
	0xe30629d1,0x27e5,0x11ce,0x87,0x5d,0x00,0x60,0x8c,0xb7,0x80,0x66)
/* Async File Reader */
OUR_GUID_ENTRY(CLSID_AsyncReader,
	0xe436ebb5,0x524f,0x11ce,0x9f,0x53,0x00,0x20,0xaf,0x0b,0xa7,0x70)
/* Memory Allocator */
OUR_GUID_ENTRY(CLSID_MemoryAllocator,
	0x1e651cc0,0xb199,0x11d0,0x82,0x12,0x00,0xc0,0x4f,0xc3,0x2c,0x45)

OUR_GUID_ENTRY(CLSID_VfwCapture,
	0x1B544C22,0xFD0B,0x11CE,0x8C,0x63,0x00,0xAA,0x00,0x44,0xB5,0x1E)
OUR_GUID_ENTRY(CLSID_SeekingPassThru,
	0x060AF76C,0x68DD,0x11D0,0x8F,0xC1,0x00,0xC0,0x4F,0xD9,0x18,0x9D)
OUR_GUID_ENTRY(CLSID_SystemDeviceEnum,
	0x62BE5D10,0x60EB,0x11D0,0xBD,0x3B,0x00,0xA0,0xC9,0x11,0xCE,0x86)
OUR_GUID_ENTRY(CLSID_CDeviceMoniker,
	0x4315D437,0x5B8C,0x11D0,0xBD,0x3B,0x00,0xA0,0xC9,0x11,0xCE,0x86)



/* Categories */
OUR_GUID_ENTRY(CLSID_ActiveMovieCategories,
	0xDA4E3DA0,0xD07D,0x11D0,0xBD,0x50,0x00,0xA0,0xC9,0x11,0xCE,0x86)
OUR_GUID_ENTRY(CLSID_AudioCompressorCategory,
	0x33D9A761,0x90C8,0x11D0,0xBD,0x43,0x00,0xA0,0xC9,0x11,0xCE,0x86)
OUR_GUID_ENTRY(CLSID_AudioInputDeviceCategory,
	0x33D9A762,0x90C8,0x11D0,0xBD,0x43,0x00,0xA0,0xC9,0x11,0xCE,0x86)
OUR_GUID_ENTRY(CLSID_AudioRendererCategory,
	0xE0F158E1,0xCB04,0x11D0,0xBD,0x4E,0x00,0xA0,0xC9,0x11,0xCE,0x86)
OUR_GUID_ENTRY(CLSID_DeviceControlCategory,
	0xCC7BFB46,0xF175,0x11D1,0xA3,0x92,0x00,0xE0,0x29,0x1F,0x39,0x59)
OUR_GUID_ENTRY(CLSID_LegacyAmFilterCategory,
	0x083863F1,0x70DE,0x11D0,0xBD,0x40,0x00,0xA0,0xC9,0x11,0xCE,0x86)
OUR_GUID_ENTRY(CLSID_MidiRendererCategory,
	0x4EFE2452,0x168A,0x11D1,0xBC,0x76,0x00,0xC0,0x4F,0xB9,0x45,0x3B)
OUR_GUID_ENTRY(CLSID_TransmitCategory,
	0xCC7BFB41,0xF175,0x11D1,0xA3,0x92,0x00,0xE0,0x29,0x1F,0x39,0x59)
OUR_GUID_ENTRY(CLSID_VideoInputDeviceCategory,
	0x860BB310,0x5D01,0x11D0,0xBD,0x3B,0x00,0xA0,0xC9,0x11,0xCE,0x86)
OUR_GUID_ENTRY(CLSID_VideoCompressorCategory,
	0x33D9A760,0x90C8,0x11D0,0xBD,0x43,0x00,0xA0,0xC9,0x11,0xCE,0x86)

/* Time formats */
OUR_GUID_ENTRY(TIME_FORMAT_BYTE,
	0x7B785571,0x8C82,0x11CF,0xBC,0x0C,0x00,0xAA,0x00,0xAC,0x74,0xF6)
OUR_GUID_ENTRY(TIME_FORMAT_FIELD,
	0x7B785573,0x8C82,0x11CF,0xBC,0x0C,0x00,0xAA,0x00,0xAC,0x74,0xF6)
OUR_GUID_ENTRY(TIME_FORMAT_FRAME,
	0x7B785570,0x8C82,0x11CF,0xBC,0x0C,0x00,0xAA,0x00,0xAC,0x74,0xF6)
OUR_GUID_ENTRY(TIME_FORMAT_MEDIA_TIME,
	0x7B785574,0x8C82,0x11CF,0xBC,0x0C,0x00,0xAA,0x00,0xAC,0x74,0xF6)
OUR_GUID_ENTRY(TIME_FORMAT_NONE,
	0x00000000,0x0000,0x0000,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00)
OUR_GUID_ENTRY(TIME_FORMAT_SAMPLE,
	0x7B785572,0x8C82,0x11CF,0xBC,0x0C,0x00,0xAA,0x00,0xAC,0x74,0xF6)


#undef	OUR_GUID_ENTRY

#endif  /* __WINE_DSHOW_UUIDS_H */
