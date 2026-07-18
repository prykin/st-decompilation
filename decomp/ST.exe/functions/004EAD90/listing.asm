FUN_004ead90:
004EAD90  55                        PUSH EBP
004EAD91  8B EC                     MOV EBP,ESP
004EAD93  83 EC 0C                  SUB ESP,0xc
004EAD96  53                        PUSH EBX
004EAD97  56                        PUSH ESI
004EAD98  8B F1                     MOV ESI,ECX
004EAD9A  57                        PUSH EDI
004EAD9B  8B 86 D0 04 00 00         MOV EAX,dword ptr [ESI + 0x4d0]
004EADA1  8B 0C 85 08 AA 79 00      MOV ECX,dword ptr [EAX*0x4 + 0x79aa08]
004EADA8  83 F9 01                  CMP ECX,0x1
004EADAB  0F 8E 43 01 00 00         JLE 0x004eaef4
004EADB1  8B BE D4 04 00 00         MOV EDI,dword ptr [ESI + 0x4d4]
004EADB7  3B F9                     CMP EDI,ECX
004EADB9  0F 8D 35 01 00 00         JGE 0x004eaef4
004EADBF  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004EADC5  8B 96 DC 04 00 00         MOV EDX,dword ptr [ESI + 0x4dc]
004EADCB  8B 9E D8 04 00 00         MOV EBX,dword ptr [ESI + 0x4d8]
004EADD1  8B 89 E4 00 00 00         MOV ECX,dword ptr [ECX + 0xe4]
004EADD7  03 D3                     ADD EDX,EBX
004EADD9  3B CA                     CMP ECX,EDX
004EADDB  0F 82 13 01 00 00         JC 0x004eaef4
004EADE1  89 8E D8 04 00 00         MOV dword ptr [ESI + 0x4d8],ECX
004EADE7  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
004EADEA  47                        INC EDI
004EADEB  C1 E1 03                  SHL ECX,0x3
004EADEE  89 BE D4 04 00 00         MOV dword ptr [ESI + 0x4d4],EDI
004EADF4  8B 1C 85 08 AA 79 00      MOV EBX,dword ptr [EAX*0x4 + 0x79aa08]
004EADFB  8B 91 1C AA 79 00         MOV EDX,dword ptr [ECX + 0x79aa1c]
004EAE01  8B 81 28 AA 79 00         MOV EAX,dword ptr [ECX + 0x79aa28]
004EAE07  2B C2                     SUB EAX,EDX
004EAE09  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
004EAE0C  0F AF C7                  IMUL EAX,EDI
004EAE0F  99                        CDQ
004EAE10  F7 FB                     IDIV EBX
004EAE12  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004EAE15  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
004EAE18  03 C2                     ADD EAX,EDX
004EAE1A  8B 91 20 AA 79 00         MOV EDX,dword ptr [ECX + 0x79aa20]
004EAE20  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004EAE23  8B 81 2C AA 79 00         MOV EAX,dword ptr [ECX + 0x79aa2c]
004EAE29  2B C2                     SUB EAX,EDX
004EAE2B  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
004EAE2E  0F AF C7                  IMUL EAX,EDI
004EAE31  99                        CDQ
004EAE32  F7 FB                     IDIV EBX
004EAE34  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004EAE37  8B 99 18 AA 79 00         MOV EBX,dword ptr [ECX + 0x79aa18]
004EAE3D  03 C2                     ADD EAX,EDX
004EAE3F  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004EAE42  8B 81 24 AA 79 00         MOV EAX,dword ptr [ECX + 0x79aa24]
004EAE48  2B C3                     SUB EAX,EBX
004EAE4A  0F AF C7                  IMUL EAX,EDI
004EAE4D  99                        CDQ
004EAE4E  F7 7D F8                  IDIV dword ptr [EBP + -0x8]
004EAE51  0F BF 4E 41               MOVSX ECX,word ptr [ESI + 0x41]
004EAE55  0F BF 56 43               MOVSX EDX,word ptr [ESI + 0x43]
004EAE59  03 D8                     ADD EBX,EAX
004EAE5B  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004EAE5E  03 CB                     ADD ECX,EBX
004EAE60  03 C2                     ADD EAX,EDX
004EAE62  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004EAE65  89 8E E0 04 00 00         MOV dword ptr [ESI + 0x4e0],ECX
004EAE6B  0F BF 4E 45               MOVSX ECX,word ptr [ESI + 0x45]
004EAE6F  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004EAE72  89 86 E4 04 00 00         MOV dword ptr [ESI + 0x4e4],EAX
004EAE78  8D 04 11                  LEA EAX,[ECX + EDX*0x1]
004EAE7B  51                        PUSH ECX
004EAE7C  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004EAE7F  89 86 E8 04 00 00         MOV dword ptr [ESI + 0x4e8],EAX
004EAE85  DB 45 F4                  FILD dword ptr [EBP + -0xc]
004EAE88  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004EAE8E  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
004EAE94  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
004EAE9A  D9 1C 24                  FSTP float ptr [ESP]
004EAE9D  DB 45 F8                  FILD dword ptr [EBP + -0x8]
004EAEA0  51                        PUSH ECX
004EAEA1  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004EAEA7  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
004EAEAD  D9 1C 24                  FSTP float ptr [ESP]
004EAEB0  DB 86 E0 04 00 00         FILD dword ptr [ESI + 0x4e0]
004EAEB6  51                        PUSH ECX
004EAEB7  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004EAEBD  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004EAEC3  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
004EAEC9  D9 1C 24                  FSTP float ptr [ESP]
004EAECC  E8 08 97 F1 FF            CALL 0x004045d9
004EAED1  8B 86 D0 04 00 00         MOV EAX,dword ptr [ESI + 0x4d0]
004EAED7  8B 8E D4 04 00 00         MOV ECX,dword ptr [ESI + 0x4d4]
004EAEDD  3B 0C 85 08 AA 79 00      CMP ECX,dword ptr [EAX*0x4 + 0x79aa08]
004EAEE4  7C 0E                     JL 0x004eaef4
004EAEE6  83 F8 03                  CMP EAX,0x3
004EAEE9  75 09                     JNZ 0x004eaef4
004EAEEB  6A 00                     PUSH 0x0
004EAEED  8B CE                     MOV ECX,ESI
004EAEEF  E8 0A 90 F1 FF            CALL 0x00403efe
LAB_004eaef4:
004EAEF4  5F                        POP EDI
004EAEF5  5E                        POP ESI
004EAEF6  33 C0                     XOR EAX,EAX
004EAEF8  5B                        POP EBX
004EAEF9  8B E5                     MOV ESP,EBP
004EAEFB  5D                        POP EBP
004EAEFC  C3                        RET
