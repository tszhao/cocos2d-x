#ifndef _CCB_CCLABELBMFONTLOADER_H_
#define _CCB_CCLABELBMFONTLOADER_H_

#include "CCNodeLoader.h"

NS_CC_EXT_BEGIN

/* Forward declaration. */
class CCBReader;

class LabelBMFontLoader : public NodeLoader {
    public:
        virtual ~LabelBMFontLoader() {};
        CCB_STATIC_NEW_AUTORELEASE_OBJECT_METHOD(LabelBMFontLoader, loader);

    protected:
        CCB_VIRTUAL_NEW_AUTORELEASE_CREATECCNODE_METHOD(LabelBMFont);

        virtual void onHandlePropTypeColor3(Node * pNode, Node * pParent, const char * pPropertyName, ccColor3B pColor3B, CCBReader * pCCBReader);
        virtual void onHandlePropTypeByte(Node * pNode, Node * pParent, const char * pPropertyName, unsigned char pByte, CCBReader * pCCBReader);
        virtual void onHandlePropTypeBlendFunc(Node * pNode, Node * pParent, const char * pPropertyName, ccBlendFunc pBlendFunc, CCBReader * pCCBReader);
        virtual void onHandlePropTypeFntFile(Node * pNode, Node * pParent, const char * pPropertyName, const char* pFntFile, CCBReader * pCCBReader);
        virtual void onHandlePropTypeText(Node * pNode, Node * pParent, const char * pPropertyName, const char* pText, CCBReader * pCCBReader);
};

NS_CC_EXT_END

#endif
