/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SMSCTServer.framework/SMSCTServer
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSArray;

@interface SMSSMILInterpreter : NSObject  {
    NSArray *_originalParts;
    struct _xmlSAXHandler { 
        int (*internalSubset)(); 
        int (*isStandalone)(); 
        int (*hasInternalSubset)(); 
        int (*hasExternalSubset)(); 
        int (*resolveEntity)(); 
        int (*getEntity)(); 
        int (*entityDecl)(); 
        int (*notationDecl)(); 
        int (*attributeDecl)(); 
        int (*elementDecl)(); 
        int (*unparsedEntityDecl)(); 
        int (*setDocumentLocator)(); 
        int (*startDocument)(); 
        int (*endDocument)(); 
        int (*startElement)(); 
        int (*endElement)(); 
        int (*reference)(); 
        int (*characters)(); 
        int (*ignorableWhitespace)(); 
        int (*processingInstruction)(); 
        int (*comment)(); 
        int (*warning)(); 
        int (*error)(); 
        int (*fatalError)(); 
        int (*getParameterEntity)(); 
        int (*cdataBlock)(); 
        int (*externalSubset)(); 
        unsigned int initialized; 
        void *_private; 
        int (*startElementNs)(); 
        int (*endElementNs)(); 
        int (*serror)(); 
    } _saxHandler;
    unsigned int _handlerInitialized : 1;
}


- (id)orderedParts;
- (id)_smilData;
- (id)_orderedPartsForSMILString:(id)arg1;
- (id)_parseParTagArrayFromSMIL:(id)arg1;
- (id)_newDictionaryRepresentationOfOriginalParts;
- (void)_initializeSAXHandler;
- (void)dealloc;
- (id)initWithMessageParts:(id)arg1;

@end
