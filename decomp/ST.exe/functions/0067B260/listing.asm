FUN_0067b260:
0067B260  57                        PUSH EDI
0067B261  8B F9                     MOV EDI,ECX
0067B263  80 BF 62 06 00 00 01      CMP byte ptr [EDI + 0x662],0x1
0067B26A  75 4D                     JNZ 0x0067b2b9
0067B26C  8B 87 A1 06 00 00         MOV EAX,dword ptr [EDI + 0x6a1]
0067B272  56                        PUSH ESI
0067B273  8B 70 0C                  MOV ESI,dword ptr [EAX + 0xc]
0067B276  4E                        DEC ESI
0067B277  78 38                     JS 0x0067b2b1
LAB_0067b279:
0067B279  8B 8F A1 06 00 00         MOV ECX,dword ptr [EDI + 0x6a1]
0067B27F  3B 71 0C                  CMP ESI,dword ptr [ECX + 0xc]
0067B282  73 2A                     JNC 0x0067b2ae
0067B284  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0067B287  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
0067B28A  0F AF C6                  IMUL EAX,ESI
0067B28D  03 C2                     ADD EAX,EDX
0067B28F  85 C0                     TEST EAX,EAX
0067B291  74 1B                     JZ 0x0067b2ae
0067B293  66 0F BE 10               MOVSX DX,byte ptr [EAX]
0067B297  66 3B 97 60 06 00 00      CMP DX,word ptr [EDI + 0x660]
0067B29E  75 0E                     JNZ 0x0067b2ae
0067B2A0  8A 50 07                  MOV DL,byte ptr [EAX + 0x7]
0067B2A3  84 D2                     TEST DL,DL
0067B2A5  75 07                     JNZ 0x0067b2ae
0067B2A7  56                        PUSH ESI
0067B2A8  51                        PUSH ECX
0067B2A9  E8 C2 59 03 00            CALL 0x006b0c70
LAB_0067b2ae:
0067B2AE  4E                        DEC ESI
0067B2AF  79 C8                     JNS 0x0067b279
LAB_0067b2b1:
0067B2B1  C6 87 62 06 00 00 00      MOV byte ptr [EDI + 0x662],0x0
0067B2B8  5E                        POP ESI
LAB_0067b2b9:
0067B2B9  5F                        POP EDI
0067B2BA  C3                        RET
