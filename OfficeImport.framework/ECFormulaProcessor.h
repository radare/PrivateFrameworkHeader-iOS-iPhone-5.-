/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface ECFormulaProcessor : NSObject  {
    struct XlFormulaProcessor { int (**x1)(); struct XlFormulaParser {} *x2; struct XlBaseFormulaTable {} *x3; struct ChVector<CsString*> { 
            struct CsString {} **m_vector; 
            struct CsString {} **m_tmpVector; 
            unsigned int m_count; 
            unsigned int m_size; 
            unsigned int m_blockSize; 
        } x4; struct XlNameTable {} *x5; struct ChVector<OcText> {} *x6; struct XlLinkTable {} *x7; unsigned int x8; unsigned int x9; BOOL x10[64]; unsigned short *x11; char *x12; boolx13; unsigned int x14; unsigned short x15; unsigned short x16; } *mXlFormulaProcessorLasso;
    struct XlFormulaProcessor { int (**x1)(); struct XlFormulaParser {} *x2; struct XlBaseFormulaTable {} *x3; struct ChVector<CsString*> { 
            struct CsString {} **m_vector; 
            struct CsString {} **m_tmpVector; 
            unsigned int m_count; 
            unsigned int m_size; 
            unsigned int m_blockSize; 
        } x4; struct XlNameTable {} *x5; struct ChVector<OcText> {} *x6; struct XlLinkTable {} *x7; unsigned int x8; unsigned int x9; BOOL x10[64]; unsigned short *x11; char *x12; boolx13; unsigned int x14; unsigned short x15; unsigned short x16; } *mXlFormulaProcessorXl;
    struct XlNameTable { int (**x1)(); struct CsSimpleHeapVector<XlRecord> { 
            struct ChVector<XlRecord*> { 
                struct XlRecord {} **m_vector; 
                struct XlRecord {} **m_tmpVector; 
                unsigned int m_count; 
                unsigned int m_size; 
                unsigned int m_blockSize; 
            } m_pointerVector; 
        } x2; struct OcText { 
            int (**_vptr$OcText)(); 
            int m_encoding; 
            unsigned int m_ulStartCP; 
            unsigned int m_ulCharacterCount; 
            unsigned int m_ulBufferSize; 
            char *m_pBuffer; 
            char *m_pTempBuffer; 
            boolm_isMyBuffer; 
        } x3[14]; } *mXlNameTable;
    struct ChVector<OcText> { struct OcText {} *x1; struct OcText {} *x2; unsigned int x3; unsigned int x4; unsigned int x5; } *mLassoSheetNames;
    struct ChVector<OcText> { struct OcText {} *x1; struct OcText {} *x2; unsigned int x3; unsigned int x4; unsigned int x5; } *mXlSheetNames;
    struct XlLinkTable { int (**x1)(); struct XlLinkLookupTable { 
            int (**_vptr$XlLinkLookupTable)(); 
            boolm_isOwnRefs; 
            struct ChVector<XlXti*> { 
                struct XlXti {} **m_vector; 
                struct XlXti {} **m_tmpVector; 
                unsigned int m_count; 
                unsigned int m_size; 
                unsigned int m_blockSize; 
            } m_lookupTable; 
        } x2; struct ChVector<XlLink*> { 
            struct XlLink {} **m_vector; 
            struct XlLink {} **m_tmpVector; 
            unsigned int m_count; 
            unsigned int m_size; 
            unsigned int m_blockSize; 
        } x3; } *mXlLinkTable;
}


- (void)setupWithWorkbook:(id)arg1;
- (struct XlFormulaProcessor { int (**x1)(); struct XlFormulaParser {} *x2; struct XlBaseFormulaTable {} *x3; struct ChVector<CsString*> { struct CsString {} **x_4_1_1; struct CsString {} **x_4_1_2; unsigned int x_4_1_3; unsigned int x_4_1_4; unsigned int x_4_1_5; } x4; struct XlNameTable {} *x5; struct ChVector<OcText> {} *x6; struct XlLinkTable {} *x7; unsigned int x8; unsigned int x9; BOOL x10[64]; unsigned short *x11; char *x12; boolx13; unsigned int x14; unsigned short x15; unsigned short x16; }*)xlFormulaProcessorLasso;
- (struct XlFormulaProcessor { int (**x1)(); struct XlFormulaParser {} *x2; struct XlBaseFormulaTable {} *x3; struct ChVector<CsString*> { struct CsString {} **x_4_1_1; struct CsString {} **x_4_1_2; unsigned int x_4_1_3; unsigned int x_4_1_4; unsigned int x_4_1_5; } x4; struct XlNameTable {} *x5; struct ChVector<OcText> {} *x6; struct XlLinkTable {} *x7; unsigned int x8; unsigned int x9; BOOL x10[64]; unsigned short *x11; char *x12; boolx13; unsigned int x14; unsigned short x15; unsigned short x16; }*)xlFormulaProcessorXl;
- (struct ChVector<OcText> { struct OcText {} *x1; struct OcText {} *x2; unsigned int x3; unsigned int x4; unsigned int x5; }*)sheetNamesFromWorkbook:(id)arg1;
- (struct XlFormulaProcessor { int (**x1)(); struct XlFormulaParser {} *x2; struct XlBaseFormulaTable {} *x3; struct ChVector<CsString*> { struct CsString {} **x_4_1_1; struct CsString {} **x_4_1_2; unsigned int x_4_1_3; unsigned int x_4_1_4; unsigned int x_4_1_5; } x4; struct XlNameTable {} *x5; struct ChVector<OcText> {} *x6; struct XlLinkTable {} *x7; unsigned int x8; unsigned int x9; BOOL x10[64]; unsigned short *x11; char *x12; boolx13; unsigned int x14; unsigned short x15; unsigned short x16; }*)setupWithWorkbook:(id)arg1 xlNameTable:(struct XlNameTable { int (**x1)(); struct CsSimpleHeapVector<XlRecord> { struct ChVector<XlRecord*> { struct XlRecord {} **x_1_2_1; struct XlRecord {} **x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; } x_2_1_1; } x2; struct OcText { int (**x_3_1_1)(); int x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; char *x_3_1_6; char *x_3_1_7; boolx_3_1_8; } x3[14]; }*)arg2 sheetNames:(struct ChVector<OcText> { struct OcText {} *x1; struct OcText {} *x2; unsigned int x3; unsigned int x4; unsigned int x5; }*)arg3 xlLinkTable:(struct XlLinkTable { int (**x1)(); struct XlLinkLookupTable { int (**x_2_1_1)(); boolx_2_1_2; struct ChVector<XlXti*> { struct XlXti {} **x_3_2_1; struct XlXti {} **x_3_2_2; unsigned int x_3_2_3; unsigned int x_3_2_4; unsigned int x_3_2_5; } x_2_1_3; } x2; struct ChVector<XlLink*> { struct XlLink {} **x_3_1_1; struct XlLink {} **x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; }*)arg4 lassoSyntax:(bool)arg5;
- (id)init;
- (void)dealloc;

@end
