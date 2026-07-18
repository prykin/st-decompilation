FUN_00533b80:
00533B80  55                        PUSH EBP
00533B81  8B EC                     MOV EBP,ESP
00533B83  83 EC 20                  SUB ESP,0x20
00533B86  A0 A0 67 80 00            MOV AL,[0x008067a0]
00533B8B  56                        PUSH ESI
00533B8C  84 C0                     TEST AL,AL
00533B8E  8B F1                     MOV ESI,ECX
00533B90  0F 84 18 01 00 00         JZ 0x00533cae
00533B96  66 83 BE 72 01 00 00 02   CMP word ptr [ESI + 0x172],0x2
00533B9E  0F 84 0A 01 00 00         JZ 0x00533cae
00533BA4  8A 86 A4 01 00 00         MOV AL,byte ptr [ESI + 0x1a4]
00533BAA  3C 05                     CMP AL,0x5
00533BAC  0F 85 D9 00 00 00         JNZ 0x00533c8b
00533BB2  80 BE AB 01 00 00 04      CMP byte ptr [ESI + 0x1ab],0x4
00533BB9  0F 85 CC 00 00 00         JNZ 0x00533c8b
00533BBF  8B 86 84 01 00 00         MOV EAX,dword ptr [ESI + 0x184]
00533BC5  8B 4E 68                  MOV ECX,dword ptr [ESI + 0x68]
00533BC8  6A 6A                     PUSH 0x6a
00533BCA  68 EE 00 00 00            PUSH 0xee
00533BCF  6A 13                     PUSH 0x13
00533BD1  6A 1D                     PUSH 0x1d
00533BD3  6A 00                     PUSH 0x0
00533BD5  50                        PUSH EAX
00533BD6  6A 13                     PUSH 0x13
00533BD8  6A 1D                     PUSH 0x1d
00533BDA  6A 00                     PUSH 0x0
00533BDC  51                        PUSH ECX
00533BDD  E8 0E 1A 18 00            CALL 0x006b55f0
00533BE2  8B 56 68                  MOV EDX,dword ptr [ESI + 0x68]
00533BE5  8B 8E 80 01 00 00         MOV ECX,dword ptr [ESI + 0x180]
00533BEB  6A 6A                     PUSH 0x6a
00533BED  68 EE 00 00 00            PUSH 0xee
00533BF2  6A 13                     PUSH 0x13
00533BF4  6A 1D                     PUSH 0x1d
00533BF6  6A 00                     PUSH 0x0
00533BF8  52                        PUSH EDX
00533BF9  E8 92 CE 1D 00            CALL 0x00710a90
00533BFE  A0 A0 67 80 00            MOV AL,[0x008067a0]
00533C03  84 C0                     TEST AL,AL
00533C05  74 20                     JZ 0x00533c27
00533C07  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00533C0C  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
00533C12  8B 50 34                  MOV EDX,dword ptr [EAX + 0x34]
00533C15  2B CA                     SUB ECX,EDX
00533C17  81 F9 70 17 00 00         CMP ECX,0x1770
00533C1D  1B C9                     SBB ECX,ECX
00533C1F  81 C1 96 3E 00 00         ADD ECX,0x3e96
00533C25  EB 05                     JMP 0x00533c2c
LAB_00533c27:
00533C27  B9 84 3E 00 00            MOV ECX,0x3e84
LAB_00533c2c:
00533C2C  89 8E A5 01 00 00         MOV dword ptr [ESI + 0x1a5],ECX
00533C32  A0 4E 87 80 00            MOV AL,[0x0080874e]
00533C37  3C 03                     CMP AL,0x3
00533C39  75 07                     JNZ 0x00533c42
00533C3B  B8 05 00 00 00            MOV EAX,0x5
00533C40  EB 09                     JMP 0x00533c4b
LAB_00533c42:
00533C42  FE C8                     DEC AL
00533C44  F6 D8                     NEG AL
00533C46  1B C0                     SBB EAX,EAX
00533C48  83 E0 07                  AND EAX,0x7
LAB_00533c4b:
00533C4B  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
00533C51  6A FF                     PUSH -0x1
00533C53  6A FF                     PUSH -0x1
00533C55  50                        PUSH EAX
00533C56  6A FF                     PUSH -0x1
00533C58  6A FE                     PUSH -0x2
00533C5A  52                        PUSH EDX
00533C5B  51                        PUSH ECX
00533C5C  E8 DF C4 17 00            CALL 0x006b0140
00533C61  8B 8E 80 01 00 00         MOV ECX,dword ptr [ESI + 0x180]
00533C67  50                        PUSH EAX
00533C68  E8 03 DF 1D 00            CALL 0x00711b70
00533C6D  8B 46 44                  MOV EAX,dword ptr [ESI + 0x44]
00533C70  8B 4E 3C                  MOV ECX,dword ptr [ESI + 0x3c]
00533C73  8B 56 60                  MOV EDX,dword ptr [ESI + 0x60]
00533C76  50                        PUSH EAX
00533C77  A1 A8 75 80 00            MOV EAX,[0x008075a8]
00533C7C  51                        PUSH ECX
00533C7D  6A FF                     PUSH -0x1
00533C7F  52                        PUSH EDX
00533C80  50                        PUSH EAX
00533C81  E8 BA F9 17 00            CALL 0x006b3640
00533C86  5E                        POP ESI
00533C87  8B E5                     MOV ESP,EBP
00533C89  5D                        POP EBP
00533C8A  C3                        RET
LAB_00533c8b:
00533C8B  3C 01                     CMP AL,0x1
00533C8D  75 1F                     JNZ 0x00533cae
00533C8F  8B 86 C1 01 00 00         MOV EAX,dword ptr [ESI + 0x1c1]
00533C95  C7 45 F0 05 00 00 00      MOV dword ptr [EBP + -0x10],0x5
00533C9C  85 C0                     TEST EAX,EAX
00533C9E  74 0E                     JZ 0x00533cae
00533CA0  8D 4D E0                  LEA ECX,[EBP + -0x20]
00533CA3  51                        PUSH ECX
00533CA4  50                        PUSH EAX
00533CA5  6A 02                     PUSH 0x2
00533CA7  8B CE                     MOV ECX,ESI
00533CA9  E8 D2 23 1B 00            CALL 0x006e6080
LAB_00533cae:
00533CAE  5E                        POP ESI
00533CAF  8B E5                     MOV ESP,EBP
00533CB1  5D                        POP EBP
00533CB2  C3                        RET
