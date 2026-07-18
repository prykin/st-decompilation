FUN_005135f0:
005135F0  55                        PUSH EBP
005135F1  8B EC                     MOV EBP,ESP
005135F3  83 EC 60                  SUB ESP,0x60
005135F6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005135FB  53                        PUSH EBX
005135FC  56                        PUSH ESI
005135FD  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00513600  33 DB                     XOR EBX,EBX
00513602  57                        PUSH EDI
00513603  8D 55 A4                  LEA EDX,[EBP + -0x5c]
00513606  8D 4D A0                  LEA ECX,[EBP + -0x60]
00513609  53                        PUSH EBX
0051360A  52                        PUSH EDX
0051360B  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
0051360E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00513614  E8 D7 A1 21 00            CALL 0x0072d7f0
00513619  8B F0                     MOV ESI,EAX
0051361B  83 C4 08                  ADD ESP,0x8
0051361E  3B F3                     CMP ESI,EBX
00513620  0F 85 36 01 00 00         JNZ 0x0051375c
00513626  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
00513629  8A 86 A1 01 00 00         MOV AL,byte ptr [ESI + 0x1a1]
0051362F  3A C3                     CMP AL,BL
00513631  74 16                     JZ 0x00513649
00513633  3C 06                     CMP AL,0x6
00513635  74 12                     JZ 0x00513649
00513637  3C 0A                     CMP AL,0xa
00513639  74 0E                     JZ 0x00513649
0051363B  88 9E A2 01 00 00         MOV byte ptr [ESI + 0x1a2],BL
00513641  89 9E AB 01 00 00         MOV dword ptr [ESI + 0x1ab],EBX
00513647  EB 12                     JMP 0x0051365b
LAB_00513649:
00513649  88 86 A2 01 00 00         MOV byte ptr [ESI + 0x1a2],AL
0051364F  8B 86 A3 01 00 00         MOV EAX,dword ptr [ESI + 0x1a3]
00513655  89 86 AB 01 00 00         MOV dword ptr [ESI + 0x1ab],EAX
LAB_0051365b:
0051365B  8B 86 78 01 00 00         MOV EAX,dword ptr [ESI + 0x178]
00513661  88 9E A1 01 00 00         MOV byte ptr [ESI + 0x1a1],BL
00513667  3B C3                     CMP EAX,EBX
00513669  89 9E A3 01 00 00         MOV dword ptr [ESI + 0x1a3],EBX
0051366F  74 26                     JZ 0x00513697
00513671  C7 46 28 02 42 00 00      MOV dword ptr [ESI + 0x28],0x4202
00513678  66 89 5E 2C               MOV word ptr [ESI + 0x2c],BX
0051367C  66 C7 46 2E 02 00         MOV word ptr [ESI + 0x2e],0x2
00513682  89 46 30                  MOV dword ptr [ESI + 0x30],EAX
00513685  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
0051368B  3B CB                     CMP ECX,EBX
0051368D  74 08                     JZ 0x00513697
0051368F  8B 11                     MOV EDX,dword ptr [ECX]
00513691  8D 46 18                  LEA EAX,[ESI + 0x18]
00513694  50                        PUSH EAX
00513695  FF 12                     CALL dword ptr [EDX]
LAB_00513697:
00513697  8B 8E CB 01 00 00         MOV ECX,dword ptr [ESI + 0x1cb]
0051369D  68 18 01 00 00            PUSH 0x118
005136A2  C7 86 CF 01 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x1cf],0xffffffff
005136AC  68 B8 01 00 00            PUSH 0x1b8
005136B1  89 59 0C                  MOV dword ptr [ECX + 0xc],EBX
005136B4  8B 96 DC 01 00 00         MOV EDX,dword ptr [ESI + 0x1dc]
005136BA  8B 46 68                  MOV EAX,dword ptr [ESI + 0x68]
005136BD  6A 16                     PUSH 0x16
005136BF  6A 21                     PUSH 0x21
005136C1  53                        PUSH EBX
005136C2  52                        PUSH EDX
005136C3  6A 16                     PUSH 0x16
005136C5  6A 21                     PUSH 0x21
005136C7  53                        PUSH EBX
005136C8  50                        PUSH EAX
005136C9  E8 22 1F 1A 00            CALL 0x006b55f0
005136CE  8B 8E B3 01 00 00         MOV ECX,dword ptr [ESI + 0x1b3]
005136D4  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
005136D7  89 59 0C                  MOV dword ptr [ECX + 0xc],EBX
005136DA  89 9E B7 01 00 00         MOV dword ptr [ESI + 0x1b7],EBX
005136E0  8B 15 18 C1 85 00         MOV EDX,dword ptr [0x0085c118]
005136E6  39 1A                     CMP dword ptr [EDX],EBX
005136E8  76 5B                     JBE 0x00513745
005136EA  33 FF                     XOR EDI,EDI
LAB_005136ec:
005136EC  8B 86 C7 01 00 00         MOV EAX,dword ptr [ESI + 0x1c7]
005136F2  03 C7                     ADD EAX,EDI
005136F4  39 58 04                  CMP dword ptr [EAX + 0x4],EBX
005136F7  75 36                     JNZ 0x0051372f
005136F9  8B 08                     MOV ECX,dword ptr [EAX]
005136FB  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
005136FE  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
00513701  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
00513704  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00513707  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0051370A  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
0051370D  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
00513710  8B 96 B3 01 00 00         MOV EDX,dword ptr [ESI + 0x1b3]
00513716  8A 40 10                  MOV AL,byte ptr [EAX + 0x10]
00513719  8D 4D E4                  LEA ECX,[EBP + -0x1c]
0051371C  51                        PUSH ECX
0051371D  52                        PUSH EDX
0051371E  88 45 F4                  MOV byte ptr [EBP + -0xc],AL
00513721  88 5D F5                  MOV byte ptr [EBP + -0xb],BL
00513724  88 5D F6                  MOV byte ptr [EBP + -0xa],BL
00513727  88 5D F7                  MOV byte ptr [EBP + -0x9],BL
0051372A  E8 91 AA 19 00            CALL 0x006ae1c0
LAB_0051372f:
0051372F  8B 0D 18 C1 85 00         MOV ECX,dword ptr [0x0085c118]
00513735  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00513738  40                        INC EAX
00513739  83 C7 11                  ADD EDI,0x11
0051373C  8B 11                     MOV EDX,dword ptr [ECX]
0051373E  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00513741  3B C2                     CMP EAX,EDX
00513743  72 A7                     JC 0x005136ec
LAB_00513745:
00513745  8B CE                     MOV ECX,ESI
00513747  E8 81 E3 EE FF            CALL 0x00401acd
0051374C  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
0051374F  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00513755  5F                        POP EDI
00513756  5E                        POP ESI
00513757  5B                        POP EBX
00513758  8B E5                     MOV ESP,EBP
0051375A  5D                        POP EBP
0051375B  C3                        RET
LAB_0051375c:
0051375C  8B 45 A0                  MOV EAX,dword ptr [EBP + -0x60]
0051375F  68 64 3A 7C 00            PUSH 0x7c3a64
00513764  68 CC 4C 7A 00            PUSH 0x7a4ccc
00513769  56                        PUSH ESI
0051376A  53                        PUSH EBX
0051376B  68 95 02 00 00            PUSH 0x295
00513770  68 3C 38 7C 00            PUSH 0x7c383c
00513775  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0051377A  E8 51 9D 19 00            CALL 0x006ad4d0
0051377F  83 C4 18                  ADD ESP,0x18
00513782  85 C0                     TEST EAX,EAX
00513784  74 01                     JZ 0x00513787
00513786  CC                        INT3
LAB_00513787:
00513787  68 95 02 00 00            PUSH 0x295
0051378C  68 3C 38 7C 00            PUSH 0x7c383c
00513791  53                        PUSH EBX
00513792  56                        PUSH ESI
00513793  E8 A8 26 19 00            CALL 0x006a5e40
00513798  5F                        POP EDI
00513799  5E                        POP ESI
0051379A  5B                        POP EBX
0051379B  8B E5                     MOV ESP,EBP
0051379D  5D                        POP EBP
0051379E  C3                        RET
