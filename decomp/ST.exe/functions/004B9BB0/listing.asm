FUN_004b9bb0:
004B9BB0  55                        PUSH EBP
004B9BB1  8B EC                     MOV EBP,ESP
004B9BB3  83 EC 20                  SUB ESP,0x20
004B9BB6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004B9BB9  56                        PUSH ESI
004B9BBA  8B F1                     MOV ESI,ECX
004B9BBC  57                        PUSH EDI
004B9BBD  8B 8E 41 02 00 00         MOV ECX,dword ptr [ESI + 0x241]
004B9BC3  2B C8                     SUB ECX,EAX
004B9BC5  89 8E 41 02 00 00         MOV dword ptr [ESI + 0x241],ECX
004B9BCB  8B F9                     MOV EDI,ECX
004B9BCD  8A 8E 3D 02 00 00         MOV CL,byte ptr [ESI + 0x23d]
004B9BD3  51                        PUSH ECX
004B9BD4  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004B9BDA  E8 D8 AD F4 FF            CALL 0x004049b7
004B9BDF  8A C8                     MOV CL,AL
004B9BE1  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004B9BE7  81 E1 FF 00 00 00         AND ECX,0xff
004B9BED  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
004B9BF0  8D 04 BF                  LEA EAX,[EDI + EDI*0x4]
004B9BF3  03 CA                     ADD ECX,EDX
004B9BF5  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
004B9BF8  C1 E0 02                  SHL EAX,0x2
004B9BFB  99                        CDQ
004B9BFC  F7 3C 8D 78 41 7E 00      IDIV dword ptr [ECX*0x4 + 0x7e4178]
004B9C03  85 FF                     TEST EDI,EDI
004B9C05  89 86 D7 05 00 00         MOV dword ptr [ESI + 0x5d7],EAX
004B9C0B  0F 8F 80 00 00 00         JG 0x004b9c91
004B9C11  8B 86 45 02 00 00         MOV EAX,dword ptr [ESI + 0x245]
004B9C17  C7 86 41 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x241],0x0
004B9C21  85 C0                     TEST EAX,EAX
004B9C23  C7 86 D7 05 00 00 00 00 00 00  MOV dword ptr [ESI + 0x5d7],0x0
004B9C2D  74 0A                     JZ 0x004b9c39
004B9C2F  83 F8 04                  CMP EAX,0x4
004B9C32  74 05                     JZ 0x004b9c39
004B9C34  83 F8 05                  CMP EAX,0x5
004B9C37  75 5F                     JNZ 0x004b9c98
LAB_004b9c39:
004B9C39  6A 01                     PUSH 0x1
004B9C3B  6A 01                     PUSH 0x1
004B9C3D  8B CE                     MOV ECX,ESI
004B9C3F  C7 86 DF 05 00 00 00 00 00 00  MOV dword ptr [ESI + 0x5df],0x0
004B9C49  E8 5C 74 F4 FF            CALL 0x004010aa
004B9C4E  8B 0D BC 17 81 00         MOV ECX,dword ptr [0x008117bc]
004B9C54  85 C9                     TEST ECX,ECX
004B9C56  74 40                     JZ 0x004b9c98
004B9C58  66 8B 56 32               MOV DX,word ptr [ESI + 0x32]
004B9C5C  66 8B 46 24               MOV AX,word ptr [ESI + 0x24]
004B9C60  66 89 55 F6               MOV word ptr [EBP + -0xa],DX
004B9C64  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
004B9C68  66 89 45 F4               MOV word ptr [EBP + -0xc],AX
004B9C6C  66 8B 45 0C               MOV AX,word ptr [EBP + 0xc]
004B9C70  66 89 55 FA               MOV word ptr [EBP + -0x6],DX
004B9C74  C7 45 F0 D1 5D 00 00      MOV dword ptr [EBP + -0x10],0x5dd1
004B9C7B  66 89 45 F8               MOV word ptr [EBP + -0x8],AX
004B9C7F  8B 01                     MOV EAX,dword ptr [ECX]
004B9C81  8D 55 E0                  LEA EDX,[EBP + -0x20]
004B9C84  52                        PUSH EDX
004B9C85  FF 10                     CALL dword ptr [EAX]
004B9C87  5F                        POP EDI
004B9C88  33 C0                     XOR EAX,EAX
004B9C8A  5E                        POP ESI
004B9C8B  8B E5                     MOV ESP,EBP
004B9C8D  5D                        POP EBP
004B9C8E  C2 0C 00                  RET 0xc
LAB_004b9c91:
004B9C91  8B CE                     MOV ECX,ESI
004B9C93  E8 37 9F F4 FF            CALL 0x00403bcf
LAB_004b9c98:
004B9C98  5F                        POP EDI
004B9C99  33 C0                     XOR EAX,EAX
004B9C9B  5E                        POP ESI
004B9C9C  8B E5                     MOV ESP,EBP
004B9C9E  5D                        POP EBP
004B9C9F  C2 0C 00                  RET 0xc
