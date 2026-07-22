STOctopusC::sub_0058AF70:
0058AF70  55                        PUSH EBP
0058AF71  8B EC                     MOV EBP,ESP
0058AF73  66 8B 45 08               MOV AX,word ptr [EBP + 0x8]
0058AF77  56                        PUSH ESI
0058AF78  8B F1                     MOV ESI,ECX
0058AF7A  57                        PUSH EDI
0058AF7B  66 8B 4D 0C               MOV CX,word ptr [EBP + 0xc]
0058AF7F  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
0058AF83  0F BF 7E 41               MOVSX EDI,word ptr [ESI + 0x41]
0058AF87  66 89 46 4E               MOV word ptr [ESI + 0x4e],AX
0058AF8B  66 89 4E 50               MOV word ptr [ESI + 0x50],CX
0058AF8F  0F BF C0                  MOVSX EAX,AX
0058AF92  2B C7                     SUB EAX,EDI
0058AF94  66 89 56 52               MOV word ptr [ESI + 0x52],DX
0058AF98  0F BF 7E 43               MOVSX EDI,word ptr [ESI + 0x43]
0058AF9C  0F BF C9                  MOVSX ECX,CX
0058AF9F  2B CF                     SUB ECX,EDI
0058AFA1  89 86 69 02 00 00         MOV dword ptr [ESI + 0x269],EAX
0058AFA7  0F BF 7E 45               MOVSX EDI,word ptr [ESI + 0x45]
0058AFAB  0F BF D2                  MOVSX EDX,DX
0058AFAE  2B D7                     SUB EDX,EDI
0058AFB0  89 8E 6D 02 00 00         MOV dword ptr [ESI + 0x26d],ECX
0058AFB6  52                        PUSH EDX
0058AFB7  51                        PUSH ECX
0058AFB8  50                        PUSH EAX
0058AFB9  6A 00                     PUSH 0x0
0058AFBB  6A 00                     PUSH 0x0
0058AFBD  6A 00                     PUSH 0x0
0058AFBF  89 96 71 02 00 00         MOV dword ptr [ESI + 0x271],EDX
0058AFC5  E8 43 1F 12 00            CALL 0x006acf0d
0058AFCA  8B 8E 69 02 00 00         MOV ECX,dword ptr [ESI + 0x269]
0058AFD0  89 86 39 02 00 00         MOV dword ptr [ESI + 0x239],EAX
0058AFD6  8B 86 6D 02 00 00         MOV EAX,dword ptr [ESI + 0x26d]
0058AFDC  6A 00                     PUSH 0x0
0058AFDE  50                        PUSH EAX
0058AFDF  51                        PUSH ECX
0058AFE0  6A 00                     PUSH 0x0
0058AFE2  6A 00                     PUSH 0x0
0058AFE4  6A 00                     PUSH 0x0
0058AFE6  E8 22 1F 12 00            CALL 0x006acf0d
0058AFEB  8B 8E A5 02 00 00         MOV ECX,dword ptr [ESI + 0x2a5]
0058AFF1  83 C4 30                  ADD ESP,0x30
0058AFF4  81 F9 F8 00 00 00         CMP ECX,0xf8
0058AFFA  89 86 3D 02 00 00         MOV dword ptr [ESI + 0x23d],EAX
0058B000  74 3D                     JZ 0x0058b03f
0058B002  81 F9 F9 00 00 00         CMP ECX,0xf9
0058B008  74 35                     JZ 0x0058b03f
0058B00A  8B 86 69 02 00 00         MOV EAX,dword ptr [ESI + 0x269]
0058B010  8B BE 39 02 00 00         MOV EDI,dword ptr [ESI + 0x239]
0058B016  C1 E0 09                  SHL EAX,0x9
0058B019  99                        CDQ
0058B01A  F7 FF                     IDIV EDI
0058B01C  89 86 51 02 00 00         MOV dword ptr [ESI + 0x251],EAX
0058B022  8B 86 6D 02 00 00         MOV EAX,dword ptr [ESI + 0x26d]
0058B028  C1 E0 09                  SHL EAX,0x9
0058B02B  99                        CDQ
0058B02C  F7 FF                     IDIV EDI
0058B02E  89 86 55 02 00 00         MOV dword ptr [ESI + 0x255],EAX
0058B034  8B 86 71 02 00 00         MOV EAX,dword ptr [ESI + 0x271]
0058B03A  C1 E0 09                  SHL EAX,0x9
0058B03D  EB 33                     JMP 0x0058b072
LAB_0058b03f:
0058B03F  8B 86 69 02 00 00         MOV EAX,dword ptr [ESI + 0x269]
0058B045  8B BE 39 02 00 00         MOV EDI,dword ptr [ESI + 0x239]
0058B04B  C1 E0 08                  SHL EAX,0x8
0058B04E  99                        CDQ
0058B04F  F7 FF                     IDIV EDI
0058B051  89 86 51 02 00 00         MOV dword ptr [ESI + 0x251],EAX
0058B057  8B 86 6D 02 00 00         MOV EAX,dword ptr [ESI + 0x26d]
0058B05D  C1 E0 08                  SHL EAX,0x8
0058B060  99                        CDQ
0058B061  F7 FF                     IDIV EDI
0058B063  89 86 55 02 00 00         MOV dword ptr [ESI + 0x255],EAX
0058B069  8B 86 71 02 00 00         MOV EAX,dword ptr [ESI + 0x271]
0058B06F  C1 E0 08                  SHL EAX,0x8
LAB_0058b072:
0058B072  99                        CDQ
0058B073  F7 FF                     IDIV EDI
0058B075  0F BF 56 41               MOVSX EDX,word ptr [ESI + 0x41]
0058B079  89 96 75 02 00 00         MOV dword ptr [ESI + 0x275],EDX
0058B07F  C7 86 65 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x265],0x0
0058B089  0F BF 56 45               MOVSX EDX,word ptr [ESI + 0x45]
0058B08D  C7 86 61 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x261],0x0
0058B097  C7 86 5D 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x25d],0x0
0058B0A1  89 96 7D 02 00 00         MOV dword ptr [ESI + 0x27d],EDX
0058B0A7  89 86 59 02 00 00         MOV dword ptr [ESI + 0x259],EAX
0058B0AD  0F BF 46 43               MOVSX EAX,word ptr [ESI + 0x43]
0058B0B1  89 86 79 02 00 00         MOV dword ptr [ESI + 0x279],EAX
0058B0B7  8B 86 81 02 00 00         MOV EAX,dword ptr [ESI + 0x281]
0058B0BD  85 C0                     TEST EAX,EAX
0058B0BF  75 47                     JNZ 0x0058b108
0058B0C1  81 F9 F8 00 00 00         CMP ECX,0xf8
0058B0C7  74 08                     JZ 0x0058b0d1
0058B0C9  81 F9 F9 00 00 00         CMP ECX,0xf9
0058B0CF  75 37                     JNZ 0x0058b108
LAB_0058b0d1:
0058B0D1  8B 86 51 02 00 00         MOV EAX,dword ptr [ESI + 0x251]
0058B0D7  85 C0                     TEST EAX,EAX
0058B0D9  7D 02                     JGE 0x0058b0dd
0058B0DB  F7 D8                     NEG EAX
LAB_0058b0dd:
0058B0DD  8B 8E 59 02 00 00         MOV ECX,dword ptr [ESI + 0x259]
0058B0E3  3B C8                     CMP ECX,EAX
0058B0E5  7E 21                     JLE 0x0058b108
0058B0E7  8B 86 55 02 00 00         MOV EAX,dword ptr [ESI + 0x255]
0058B0ED  85 C0                     TEST EAX,EAX
0058B0EF  7D 02                     JGE 0x0058b0f3
0058B0F1  F7 D8                     NEG EAX
LAB_0058b0f3:
0058B0F3  3B C8                     CMP ECX,EAX
0058B0F5  B8 01 00 00 00            MOV EAX,0x1
0058B0FA  7E 11                     JLE 0x0058b10d
0058B0FC  89 86 81 02 00 00         MOV dword ptr [ESI + 0x281],EAX
0058B102  5F                        POP EDI
0058B103  5E                        POP ESI
0058B104  5D                        POP EBP
0058B105  C2 0C 00                  RET 0xc
LAB_0058b108:
0058B108  B8 01 00 00 00            MOV EAX,0x1
LAB_0058b10d:
0058B10D  5F                        POP EDI
0058B10E  5E                        POP ESI
0058B10F  5D                        POP EBP
0058B110  C2 0C 00                  RET 0xc
