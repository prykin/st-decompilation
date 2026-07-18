FUN_00620030:
00620030  55                        PUSH EBP
00620031  8B EC                     MOV EBP,ESP
00620033  83 EC 0C                  SUB ESP,0xc
00620036  8B 81 C5 00 00 00         MOV EAX,dword ptr [ECX + 0xc5]
0062003C  53                        PUSH EBX
0062003D  83 CB FF                  OR EBX,0xffffffff
00620040  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00620043  85 C0                     TEST EAX,EAX
00620045  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00620048  0F 84 BB 00 00 00         JZ 0x00620109
0062004E  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
00620051  48                        DEC EAX
00620052  0F 88 B1 00 00 00         JS 0x00620109
00620058  8B D0                     MOV EDX,EAX
0062005A  56                        PUSH ESI
0062005B  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0062005E  57                        PUSH EDI
0062005F  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00620062  EB 03                     JMP 0x00620067
LAB_00620064:
00620064  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
LAB_00620067:
00620067  8B 89 C5 00 00 00         MOV ECX,dword ptr [ECX + 0xc5]
0062006D  3B 51 0C                  CMP EDX,dword ptr [ECX + 0xc]
00620070  73 7F                     JNC 0x006200f1
00620072  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00620075  8B 79 1C                  MOV EDI,dword ptr [ECX + 0x1c]
00620078  0F AF C2                  IMUL EAX,EDX
0062007B  03 C7                     ADD EAX,EDI
0062007D  85 C0                     TEST EAX,EAX
0062007F  74 70                     JZ 0x006200f1
00620081  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
00620084  8D 7A FD                  LEA EDI,[EDX + -0x3]
00620087  39 7D 0C                  CMP dword ptr [EBP + 0xc],EDI
0062008A  7C 4D                     JL 0x006200d9
0062008C  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0062008F  83 C2 03                  ADD EDX,0x3
00620092  3B FA                     CMP EDI,EDX
00620094  7F 43                     JG 0x006200d9
00620096  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
00620099  8D 5A FD                  LEA EBX,[EDX + -0x3]
0062009C  39 5D 10                  CMP dword ptr [EBP + 0x10],EBX
0062009F  7C 35                     JL 0x006200d6
006200A1  8D 5A 03                  LEA EBX,[EDX + 0x3]
006200A4  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006200A7  3B D3                     CMP EDX,EBX
006200A9  7F 2B                     JG 0x006200d6
006200AB  89 78 08                  MOV dword ptr [EAX + 0x8],EDI
006200AE  8B 38                     MOV EDI,dword ptr [EAX]
006200B0  8B CE                     MOV ECX,ESI
006200B2  BB 01 00 00 00            MOV EBX,0x1
006200B7  2B CF                     SUB ECX,EDI
006200B9  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006200BC  81 F9 94 11 00 00         CMP ECX,0x1194
006200C2  89 50 0C                  MOV dword ptr [EAX + 0xc],EDX
006200C5  89 70 04                  MOV dword ptr [EAX + 0x4],ESI
006200C8  76 27                     JBE 0x006200f1
006200CA  BB 02 00 00 00            MOV EBX,0x2
006200CF  89 30                     MOV dword ptr [EAX],ESI
006200D1  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006200D4  EB 1B                     JMP 0x006200f1
LAB_006200d6:
006200D6  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_006200d9:
006200D9  8B 38                     MOV EDI,dword ptr [EAX]
006200DB  8B D6                     MOV EDX,ESI
006200DD  2B D7                     SUB EDX,EDI
006200DF  81 FA 94 11 00 00         CMP EDX,0x1194
006200E5  76 0A                     JBE 0x006200f1
006200E7  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006200EA  50                        PUSH EAX
006200EB  51                        PUSH ECX
006200EC  E8 7F 0B 09 00            CALL 0x006b0c70
LAB_006200f1:
006200F1  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006200F4  4A                        DEC EDX
006200F5  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006200F8  0F 89 66 FF FF FF         JNS 0x00620064
006200FE  5F                        POP EDI
006200FF  8B C3                     MOV EAX,EBX
00620101  5E                        POP ESI
00620102  5B                        POP EBX
00620103  8B E5                     MOV ESP,EBP
00620105  5D                        POP EBP
00620106  C2 10 00                  RET 0x10
LAB_00620109:
00620109  8B C3                     MOV EAX,EBX
0062010B  5B                        POP EBX
0062010C  8B E5                     MOV ESP,EBP
0062010E  5D                        POP EBP
0062010F  C2 10 00                  RET 0x10
