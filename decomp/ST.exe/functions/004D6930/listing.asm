FUN_004d6930:
004D6930  55                        PUSH EBP
004D6931  8B EC                     MOV EBP,ESP
004D6933  53                        PUSH EBX
004D6934  56                        PUSH ESI
004D6935  8B F1                     MOV ESI,ECX
004D6937  57                        PUSH EDI
004D6938  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
004D693B  33 D2                     XOR EDX,EDX
004D693D  8B 86 59 02 00 00         MOV EAX,dword ptr [ESI + 0x259]
004D6943  89 07                     MOV dword ptr [EDI],EAX
004D6945  C6 47 06 02               MOV byte ptr [EDI + 0x6],0x2
004D6949  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
004D694C  8B 5E 24                  MOV EBX,dword ptr [ESI + 0x24]
004D694F  8A 91 2D 11 00 00         MOV DL,byte ptr [ECX + 0x112d]
004D6955  3B DA                     CMP EBX,EDX
004D6957  0F 95 C0                  SETNZ AL
004D695A  48                        DEC EAX
004D695B  24 FE                     AND AL,0xfe
004D695D  83 C0 03                  ADD EAX,0x3
004D6960  88 47 05                  MOV byte ptr [EDI + 0x5],AL
004D6963  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
004D6966  51                        PUSH ECX
004D6967  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004D696D  E8 45 E0 F2 FF            CALL 0x004049b7
004D6972  88 47 04                  MOV byte ptr [EDI + 0x4],AL
004D6975  8B 96 D1 01 00 00         MOV EDX,dword ptr [ESI + 0x1d1]
004D697B  C1 EA 02                  SHR EDX,0x2
004D697E  F6 D2                     NOT DL
004D6980  80 E2 01                  AND DL,0x1
004D6983  8D 47 09                  LEA EAX,[EDI + 0x9]
004D6986  88 57 07                  MOV byte ptr [EDI + 0x7],DL
004D6989  8B D0                     MOV EDX,EAX
004D698B  33 C9                     XOR ECX,ECX
004D698D  89 0A                     MOV dword ptr [EDX],ECX
004D698F  66 89 4A 04               MOV word ptr [EDX + 0x4],CX
004D6993  8D 4F 0F                  LEA ECX,[EDI + 0xf]
004D6996  8B D9                     MOV EBX,ECX
004D6998  33 D2                     XOR EDX,EDX
004D699A  89 13                     MOV dword ptr [EBX],EDX
004D699C  66 89 53 04               MOV word ptr [EBX + 0x4],DX
004D69A0  8B 96 A4 02 00 00         MOV EDX,dword ptr [ESI + 0x2a4]
004D69A6  85 D2                     TEST EDX,EDX
004D69A8  74 08                     JZ 0x004d69b2
004D69AA  C6 00 51                  MOV byte ptr [EAX],0x51
004D69AD  C6 01 01                  MOV byte ptr [ECX],0x1
004D69B0  EB 2D                     JMP 0x004d69df
LAB_004d69b2:
004D69B2  C6 00 50                  MOV byte ptr [EAX],0x50
004D69B5  8B 86 EC 02 00 00         MOV EAX,dword ptr [ESI + 0x2ec]
004D69BB  83 F8 02                  CMP EAX,0x2
004D69BE  75 16                     JNZ 0x004d69d6
004D69C0  8B 86 A8 02 00 00         MOV EAX,dword ptr [ESI + 0x2a8]
004D69C6  85 C0                     TEST EAX,EAX
004D69C8  7E 0C                     JLE 0x004d69d6
004D69CA  83 F8 64                  CMP EAX,0x64
004D69CD  7F 07                     JG 0x004d69d6
004D69CF  B8 01 00 00 00            MOV EAX,0x1
004D69D4  EB 02                     JMP 0x004d69d8
LAB_004d69d6:
004D69D6  33 C0                     XOR EAX,EAX
LAB_004d69d8:
004D69D8  85 C0                     TEST EAX,EAX
004D69DA  0F 95 C0                  SETNZ AL
004D69DD  88 01                     MOV byte ptr [ECX],AL
LAB_004d69df:
004D69DF  8B 8E 59 02 00 00         MOV ECX,dword ptr [ESI + 0x259]
004D69E5  89 4F 1D                  MOV dword ptr [EDI + 0x1d],ECX
004D69E8  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
004D69EB  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004D69F1  52                        PUSH EDX
004D69F2  E8 C0 DF F2 FF            CALL 0x004049b7
004D69F7  3C 03                     CMP AL,0x3
004D69F9  8B 86 68 03 00 00         MOV EAX,dword ptr [ESI + 0x368]
004D69FF  74 1A                     JZ 0x004d6a1b
004D6A01  8B 96 6C 03 00 00         MOV EDX,dword ptr [ESI + 0x36c]
004D6A07  8B 8E D4 02 00 00         MOV ECX,dword ptr [ESI + 0x2d4]
004D6A0D  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
004D6A10  03 C2                     ADD EAX,EDX
004D6A12  8B 04 85 FC 24 7E 00      MOV EAX,dword ptr [EAX*0x4 + 0x7e24fc]
004D6A19  EB 18                     JMP 0x004d6a33
LAB_004d6a1b:
004D6A1B  8B 96 6C 03 00 00         MOV EDX,dword ptr [ESI + 0x36c]
004D6A21  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
004D6A24  03 CA                     ADD ECX,EDX
004D6A26  8B 04 8D 60 31 7E 00      MOV EAX,dword ptr [ECX*0x4 + 0x7e3160]
004D6A2D  8B 8E D8 02 00 00         MOV ECX,dword ptr [ESI + 0x2d8]
LAB_004d6a33:
004D6A33  2B C1                     SUB EAX,ECX
004D6A35  66 89 47 27               MOV word ptr [EDI + 0x27],AX
004D6A39  8B 86 68 03 00 00         MOV EAX,dword ptr [ESI + 0x368]
004D6A3F  8B 9E 6C 03 00 00         MOV EBX,dword ptr [ESI + 0x36c]
004D6A45  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
004D6A48  03 D3                     ADD EDX,EBX
004D6A4A  66 8B 04 95 50 1C 7E 00   MOV AX,word ptr [EDX*0x4 + 0x7e1c50]
004D6A52  66 2B 86 D0 02 00 00      SUB AX,word ptr [ESI + 0x2d0]
004D6A59  66 89 47 2B               MOV word ptr [EDI + 0x2b],AX
004D6A5D  8A 8E A8 02 00 00         MOV CL,byte ptr [ESI + 0x2a8]
004D6A63  88 4F 2F                  MOV byte ptr [EDI + 0x2f],CL
004D6A66  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
004D6A69  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004D6A6F  52                        PUSH EDX
004D6A70  E8 42 DF F2 FF            CALL 0x004049b7
004D6A75  88 47 25                  MOV byte ptr [EDI + 0x25],AL
004D6A78  8B 86 A4 02 00 00         MOV EAX,dword ptr [ESI + 0x2a4]
004D6A7E  85 C0                     TEST EAX,EAX
004D6A80  74 0E                     JZ 0x004d6a90
004D6A82  C7 47 58 DE 0B 00 00      MOV dword ptr [EDI + 0x58],0xbde
004D6A89  5F                        POP EDI
004D6A8A  5E                        POP ESI
004D6A8B  5B                        POP EBX
004D6A8C  5D                        POP EBP
004D6A8D  C2 04 00                  RET 0x4
LAB_004d6a90:
004D6A90  8B 86 B8 02 00 00         MOV EAX,dword ptr [ESI + 0x2b8]
004D6A96  85 C0                     TEST EAX,EAX
004D6A98  75 0E                     JNZ 0x004d6aa8
004D6A9A  C7 47 58 B9 0B 00 00      MOV dword ptr [EDI + 0x58],0xbb9
004D6AA1  5F                        POP EDI
004D6AA2  5E                        POP ESI
004D6AA3  5B                        POP EBX
004D6AA4  5D                        POP EBP
004D6AA5  C2 04 00                  RET 0x4
LAB_004d6aa8:
004D6AA8  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004D6AAB  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004D6AB1  50                        PUSH EAX
004D6AB2  E8 5E BD F2 FF            CALL 0x00402815
004D6AB7  85 C0                     TEST EAX,EAX
004D6AB9  75 0E                     JNZ 0x004d6ac9
004D6ABB  C7 47 58 DF 0B 00 00      MOV dword ptr [EDI + 0x58],0xbdf
004D6AC2  5F                        POP EDI
004D6AC3  5E                        POP ESI
004D6AC4  5B                        POP EBX
004D6AC5  5D                        POP EBP
004D6AC6  C2 04 00                  RET 0x4
LAB_004d6ac9:
004D6AC9  8B 86 B4 02 00 00         MOV EAX,dword ptr [ESI + 0x2b4]
004D6ACF  85 C0                     TEST EAX,EAX
004D6AD1  74 0E                     JZ 0x004d6ae1
004D6AD3  C7 47 58 B8 0B 00 00      MOV dword ptr [EDI + 0x58],0xbb8
004D6ADA  5F                        POP EDI
004D6ADB  5E                        POP ESI
004D6ADC  5B                        POP EBX
004D6ADD  5D                        POP EBP
004D6ADE  C2 04 00                  RET 0x4
LAB_004d6ae1:
004D6AE1  8B 86 BC 02 00 00         MOV EAX,dword ptr [ESI + 0x2bc]
004D6AE7  85 C0                     TEST EAX,EAX
004D6AE9  75 0E                     JNZ 0x004d6af9
004D6AEB  C7 47 58 BA 0B 00 00      MOV dword ptr [EDI + 0x58],0xbba
004D6AF2  5F                        POP EDI
004D6AF3  5E                        POP ESI
004D6AF4  5B                        POP EBX
004D6AF5  5D                        POP EBP
004D6AF6  C2 04 00                  RET 0x4
LAB_004d6af9:
004D6AF9  8B 86 C0 02 00 00         MOV EAX,dword ptr [ESI + 0x2c0]
004D6AFF  85 C0                     TEST EAX,EAX
004D6B01  75 0E                     JNZ 0x004d6b11
004D6B03  C7 47 58 BB 0B 00 00      MOV dword ptr [EDI + 0x58],0xbbb
004D6B0A  5F                        POP EDI
004D6B0B  5E                        POP ESI
004D6B0C  5B                        POP EBX
004D6B0D  5D                        POP EBP
004D6B0E  C2 04 00                  RET 0x4
LAB_004d6b11:
004D6B11  8B 86 C4 02 00 00         MOV EAX,dword ptr [ESI + 0x2c4]
004D6B17  85 C0                     TEST EAX,EAX
004D6B19  75 0E                     JNZ 0x004d6b29
004D6B1B  C7 47 58 BC 0B 00 00      MOV dword ptr [EDI + 0x58],0xbbc
004D6B22  5F                        POP EDI
004D6B23  5E                        POP ESI
004D6B24  5B                        POP EBX
004D6B25  5D                        POP EBP
004D6B26  C2 04 00                  RET 0x4
LAB_004d6b29:
004D6B29  8B 86 C8 02 00 00         MOV EAX,dword ptr [ESI + 0x2c8]
004D6B2F  85 C0                     TEST EAX,EAX
004D6B31  75 07                     JNZ 0x004d6b3a
004D6B33  C7 47 58 D3 0B 00 00      MOV dword ptr [EDI + 0x58],0xbd3
LAB_004d6b3a:
004D6B3A  5F                        POP EDI
004D6B3B  5E                        POP ESI
004D6B3C  5B                        POP EBX
004D6B3D  5D                        POP EBP
004D6B3E  C2 04 00                  RET 0x4
