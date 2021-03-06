#ifndef _IGA_BXML_TYPES_HPP
#define _IGA_BXML_TYPES_HPP

// ******************** DO NOT MODIFY DIRECTLY ********************
// Auto-generated by IGA project tools
//  (see IGAToolChain/bxml/*)

// WARNING: best not to depend on these symbols; things can change without notice.
// You can suppress the creation any of these enums via:
//  % igabxml --suppress-fc=XXXX ...
namespace iga
{

    enum class MathFC
    {
        INVALID = 0,
        INV    =  1,
        LOG    =  2,
        EXP    =  3,
        SQT    =  4,
        RSQT   =  5,
        SIN    =  6,
        COS    =  7,
        FDIV   =  9,
        POW    = 10,
        IDIV   = 11,
        IQOT   = 12,
        IREM   = 13,
        INVM   = 14,
        RSQTM  = 15,
    };



}
#endif // _IGA_BXML_TYPES_HPP
