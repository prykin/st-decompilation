FUN_006ddbe0:
006DDBE0  55                        PUSH EBP
006DDBE1  8B EC                     MOV EBP,ESP
006DDBE3  6A FF                     PUSH -0x1
006DDBE5  68 D8 DF 79 00            PUSH 0x79dfd8
006DDBEA  68 64 D9 72 00            PUSH 0x72d964
006DDBEF  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
006DDBF5  50                        PUSH EAX
006DDBF6  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
006DDBFD  83 EC 1C                  SUB ESP,0x1c
006DDC00  53                        PUSH EBX
006DDC01  56                        PUSH ESI
006DDC02  57                        PUSH EDI
006DDC03  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006DDC06  8B F1                     MOV ESI,ECX
006DDC08  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006DDC0B  85 C0                     TEST EAX,EAX
006DDC0D  74 13                     JZ 0x006ddc22
006DDC0F  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
006DDC12  25 00 11 00 00            AND EAX,0x1100
006DDC17  3D 00 01 00 00            CMP EAX,0x100
006DDC1C  0F 84 15 01 00 00         JZ 0x006ddd37
LAB_006ddc22:
006DDC22  8B 86 DC 02 00 00         MOV EAX,dword ptr [ESI + 0x2dc]
006DDC28  85 C0                     TEST EAX,EAX
006DDC2A  74 0E                     JZ 0x006ddc3a
006DDC2C  8B 86 D8 02 00 00         MOV EAX,dword ptr [ESI + 0x2d8]
006DDC32  85 C0                     TEST EAX,EAX
006DDC34  0F 84 FD 00 00 00         JZ 0x006ddd37
LAB_006ddc3a:
006DDC3A  8B 46 30                  MOV EAX,dword ptr [ESI + 0x30]
006DDC3D  8B 7E 38                  MOV EDI,dword ptr [ESI + 0x38]
006DDC40  2B F8                     SUB EDI,EAX
006DDC42  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
006DDC45  8B 4E 34                  MOV ECX,dword ptr [ESI + 0x34]
006DDC48  8B 5E 3C                  MOV EBX,dword ptr [ESI + 0x3c]
006DDC4B  2B D9                     SUB EBX,ECX
006DDC4D  8B 96 28 01 00 00         MOV EDX,dword ptr [ESI + 0x128]
006DDC53  52                        PUSH EDX
006DDC54  53                        PUSH EBX
006DDC55  57                        PUSH EDI
006DDC56  51                        PUSH ECX
006DDC57  50                        PUSH EAX
006DDC58  8B 46 28                  MOV EAX,dword ptr [ESI + 0x28]
006DDC5B  50                        PUSH EAX
006DDC5C  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
006DDC5F  51                        PUSH ECX
006DDC60  E8 6B 25 FD FF            CALL 0x006b01d0
006DDC65  B8 01 00 00 00            MOV EAX,0x1
006DDC6A  39 86 24 01 00 00         CMP dword ptr [ESI + 0x124],EAX
006DDC70  8B 56 28                  MOV EDX,dword ptr [ESI + 0x28]
006DDC73  75 60                     JNZ 0x006ddcd5
006DDC75  0F AF 56 34               IMUL EDX,dword ptr [ESI + 0x34]
006DDC79  03 56 14                  ADD EDX,dword ptr [ESI + 0x14]
006DDC7C  03 56 30                  ADD EDX,dword ptr [ESI + 0x30]
006DDC7F  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
LAB_006ddc86:
006DDC86  8B C3                     MOV EAX,EBX
006DDC88  4B                        DEC EBX
006DDC89  89 5D E0                  MOV dword ptr [EBP + -0x20],EBX
006DDC8C  85 C0                     TEST EAX,EAX
006DDC8E  0F 84 9C 00 00 00         JZ 0x006ddd30
006DDC94  8B CF                     MOV ECX,EDI
006DDC96  B8 40 40 40 40            MOV EAX,0x40404040
006DDC9B  8B FA                     MOV EDI,EDX
006DDC9D  8B D9                     MOV EBX,ECX
006DDC9F  C1 E9 02                  SHR ECX,0x2
006DDCA2  F3 AB                     STOSD.REP ES:EDI
006DDCA4  8B CB                     MOV ECX,EBX
006DDCA6  83 E1 03                  AND ECX,0x3
006DDCA9  F3 AA                     STOSB.REP ES:EDI
006DDCAB  03 56 28                  ADD EDX,dword ptr [ESI + 0x28]
006DDCAE  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
006DDCB1  8B 5D E0                  MOV EBX,dword ptr [EBP + -0x20]
006DDCB4  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
006DDCB7  EB CD                     JMP 0x006ddc86
LAB_006ddcd5:
006DDCD5  0F AF 56 34               IMUL EDX,dword ptr [ESI + 0x34]
006DDCD9  03 56 30                  ADD EDX,dword ptr [ESI + 0x30]
006DDCDC  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
006DDCDF  8D 14 51                  LEA EDX,[ECX + EDX*0x2]
006DDCE2  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
006DDCE5  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_006ddce8:
006DDCE8  8B C3                     MOV EAX,EBX
006DDCEA  4B                        DEC EBX
006DDCEB  89 5D E0                  MOV dword ptr [EBP + -0x20],EBX
006DDCEE  85 C0                     TEST EAX,EAX
006DDCF0  74 3E                     JZ 0x006ddd30
006DDCF2  68 30 75 00 00            PUSH 0x7530
006DDCF7  57                        PUSH EDI
006DDCF8  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
006DDCFB  51                        PUSH ECX
006DDCFC  E8 BF 09 FF FF            CALL 0x006ce6c0
006DDD01  8B 56 28                  MOV EDX,dword ptr [ESI + 0x28]
006DDD04  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
006DDD07  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
006DDD0A  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
006DDD0D  EB D9                     JMP 0x006ddce8
LAB_006ddd30:
006DDD30  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
LAB_006ddd37:
006DDD37  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006DDD3A  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006DDD41  5F                        POP EDI
006DDD42  5E                        POP ESI
006DDD43  5B                        POP EBX
006DDD44  8B E5                     MOV ESP,EBP
006DDD46  5D                        POP EBP
006DDD47  C3                        RET
