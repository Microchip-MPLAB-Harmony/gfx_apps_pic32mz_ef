#include "gfx/legato/generated/le_gen_assets.h"

/*****************************************************************************
 * Legato String Table
 * Encoding        ASCII
 * Language Count: 1
 * String Count:   19
 *****************************************************************************/

/*****************************************************************************
 * string table data
 * 
 * this table contains the raw character data for each string
 * 
 * unsigned short - number of indices in the table
 * unsigned short - number of languages in the table
 * 
 * index array (size = number of indices * number of languages
 * 
 * for each index in the array:
 *   unsigned byte - the font ID for the index
 *   unsigned byte[3] - the offset of the string codepoint data in
 *                      the table
 * 
 * string data is found by jumping to the index offset from the start
 * of the table
 * 
 * string data entry:
 *     unsigned short - length of the string in bytes (encoding dependent)
 *     codepoint data - the string data
 ****************************************************************************/

const uint8_t stringTable_data[506] =
{
    0x13,0x00,0x01,0x00,0x01,0x50,0x00,0x00,0x00,0x74,0x00,0x00,0xFF,0x78,0x00,0x00,
    0x01,0x7C,0x00,0x00,0x01,0x8A,0x00,0x00,0x01,0x8E,0x00,0x00,0x00,0xA4,0x00,0x00,
    0x01,0xAA,0x00,0x00,0x01,0xBE,0x00,0x00,0x01,0xDC,0x00,0x00,0x01,0xE6,0x00,0x00,
    0x00,0x18,0x01,0x00,0x00,0x3C,0x01,0x00,0x01,0x46,0x01,0x00,0x01,0x7A,0x01,0x00,
    0x01,0x9C,0x01,0x00,0x01,0xA8,0x01,0x00,0x01,0xB0,0x01,0x00,0x01,0xDC,0x01,0x00,
    0x22,0x00,0x54,0x68,0x65,0x20,0x73,0x65,0x6C,0x65,0x63,0x74,0x65,0x64,0x20,0x6D,
    0x65,0x64,0x69,0x75,0x6D,0x20,0x77,0x61,0x73,0x20,0x6E,0x6F,0x74,0x20,0x66,0x6F,
    0x75,0x6E,0x64,0x2E,0x02,0x00,0x4F,0x6B,0x00,0x00,0x00,0x00,0x0B,0x00,0x46,0x6C,
    0x61,0x73,0x68,0x69,0x6E,0x67,0x2E,0x2E,0x2E,0x00,0x02,0x00,0x6F,0x66,0x13,0x00,
    0x74,0x68,0x65,0x20,0x72,0x6F,0x6F,0x74,0x20,0x64,0x69,0x72,0x65,0x63,0x74,0x6F,
    0x72,0x79,0x2E,0x00,0x03,0x00,0x55,0x53,0x42,0x00,0x12,0x00,0x46,0x6C,0x61,0x73,
    0x68,0x69,0x6E,0x67,0x20,0x63,0x6F,0x6D,0x70,0x6C,0x65,0x74,0x65,0x21,0x1B,0x00,
    0x50,0x6C,0x65,0x61,0x73,0x65,0x20,0x69,0x6E,0x73,0x65,0x72,0x74,0x20,0x61,0x20,
    0x55,0x53,0x42,0x20,0x64,0x65,0x76,0x69,0x63,0x65,0x2E,0x00,0x08,0x00,0x39,0x39,
    0x39,0x39,0x39,0x39,0x39,0x39,0x30,0x00,0x41,0x6E,0x20,0x75,0x6E,0x6B,0x6E,0x6F,
    0x77,0x6E,0x20,0x65,0x72,0x72,0x6F,0x72,0x20,0x6F,0x63,0x63,0x75,0x72,0x65,0x64,
    0x20,0x64,0x75,0x72,0x69,0x6E,0x67,0x20,0x72,0x65,0x63,0x6F,0x72,0x64,0x20,0x64,
    0x65,0x63,0x6F,0x64,0x69,0x6E,0x67,0x2E,0x22,0x00,0x4C,0x65,0x67,0x61,0x74,0x6F,
    0x20,0x4D,0x65,0x6D,0x6F,0x72,0x79,0x20,0x46,0x6C,0x61,0x73,0x68,0x69,0x6E,0x67,
    0x20,0x41,0x70,0x70,0x6C,0x69,0x63,0x61,0x74,0x69,0x6F,0x6E,0x07,0x00,0x53,0x44,
    0x20,0x43,0x61,0x72,0x64,0x00,0x32,0x00,0x54,0x68,0x65,0x20,0x73,0x65,0x6C,0x65,
    0x63,0x74,0x65,0x64,0x20,0x6D,0x65,0x64,0x69,0x75,0x6D,0x20,0x64,0x69,0x64,0x20,
    0x6E,0x6F,0x74,0x20,0x63,0x6F,0x6E,0x74,0x61,0x69,0x6E,0x20,0x27,0x69,0x6D,0x61,
    0x67,0x65,0x2E,0x68,0x65,0x78,0x27,0x20,0x69,0x6E,0x1F,0x00,0x4E,0x6F,0x20,0x76,
    0x61,0x6C,0x69,0x64,0x20,0x73,0x74,0x6F,0x72,0x61,0x67,0x65,0x20,0x6D,0x65,0x64,
    0x69,0x75,0x6D,0x73,0x20,0x66,0x6F,0x75,0x6E,0x64,0x2E,0x00,0x0A,0x00,0x30,0x31,
    0x32,0x33,0x34,0x35,0x36,0x37,0x38,0x39,0x05,0x00,0x44,0x6F,0x6E,0x65,0x21,0x00,
    0x2A,0x00,0x53,0x65,0x6C,0x65,0x63,0x74,0x20,0x73,0x6F,0x75,0x72,0x63,0x65,0x20,
    0x66,0x72,0x6F,0x6D,0x20,0x77,0x68,0x69,0x63,0x68,0x20,0x74,0x6F,0x20,0x6C,0x6F,
    0x61,0x64,0x20,0x27,0x53,0x51,0x49,0x2E,0x68,0x65,0x78,0x27,0x1C,0x00,0x54,0x68,
    0x65,0x20,0x69,0x6D,0x61,0x67,0x65,0x20,0x66,0x69,0x6C,0x65,0x20,0x69,0x73,0x20,
    0x6E,0x6F,0x74,0x20,0x76,0x61,0x6C,0x69,0x64,0x2E,
};

/* font asset pointer list */
leFont* fontList[2] =
{
    (leFont*)&NotoSans_Bold,
    (leFont*)&NotoSans_Regular,
};

const leStringTable stringTable =
{
    {
        LE_STREAM_LOCATION_ID_INTERNAL, // data location id
        (void*)stringTable_data, // data address pointer
        506, // data size
    },
    (void*)stringTable_data, // string table data
    fontList, // font lookup table
    LE_STRING_ENCODING_ASCII // encoding standard
};


// string list
leTableString string_NoMedium;
leTableString string_Ok;
leTableString string_RecordCount;
leTableString string_Flashing;
leTableString string_Of;
leTableString string_FileNotFound2;
leTableString string_USB;
leTableString string_FlashingComplete;
leTableString string_NoValidMedium2;
leTableString string_stringNumberFiller;
leTableString string_UnknownError;
leTableString string_Title;
leTableString string_SDCard;
leTableString string_FileNotFound1;
leTableString string_NoValidMedium;
leTableString string_Numbers;
leTableString string_Done;
leTableString string_SelectSource;
leTableString string_InvalidFile;

void initializeStrings(void)
{
    leTableString_Constructor(&string_NoMedium, stringID_NoMedium);
    leTableString_Constructor(&string_Ok, stringID_Ok);
    leTableString_Constructor(&string_RecordCount, stringID_RecordCount);
    leTableString_Constructor(&string_Flashing, stringID_Flashing);
    leTableString_Constructor(&string_Of, stringID_Of);
    leTableString_Constructor(&string_FileNotFound2, stringID_FileNotFound2);
    leTableString_Constructor(&string_USB, stringID_USB);
    leTableString_Constructor(&string_FlashingComplete, stringID_FlashingComplete);
    leTableString_Constructor(&string_NoValidMedium2, stringID_NoValidMedium2);
    leTableString_Constructor(&string_stringNumberFiller, stringID_stringNumberFiller);
    leTableString_Constructor(&string_UnknownError, stringID_UnknownError);
    leTableString_Constructor(&string_Title, stringID_Title);
    leTableString_Constructor(&string_SDCard, stringID_SDCard);
    leTableString_Constructor(&string_FileNotFound1, stringID_FileNotFound1);
    leTableString_Constructor(&string_NoValidMedium, stringID_NoValidMedium);
    leTableString_Constructor(&string_Numbers, stringID_Numbers);
    leTableString_Constructor(&string_Done, stringID_Done);
    leTableString_Constructor(&string_SelectSource, stringID_SelectSource);
    leTableString_Constructor(&string_InvalidFile, stringID_InvalidFile);
}
