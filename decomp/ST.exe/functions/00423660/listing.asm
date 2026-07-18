STGroupC::GetTOBJList:
00423660  55                        PUSH EBP
00423661  8B EC                     MOV EBP,ESP
00423663  83 EC 54                  SUB ESP,0x54
00423666  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0042366B  53                        PUSH EBX
0042366C  56                        PUSH ESI
0042366D  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00423670  57                        PUSH EDI
00423671  8D 55 B0                  LEA EDX,[EBP + -0x50]
00423674  8D 4D AC                  LEA ECX,[EBP + -0x54]
00423677  6A 00                     PUSH 0x0
00423679  52                        PUSH EDX
0042367A  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
0042367D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00423683  E8 68 A1 30 00            CALL 0x0072d7f0
00423688  8B F0                     MOV ESI,EAX
0042368A  83 C4 08                  ADD ESP,0x8
0042368D  85 F6                     TEST ESI,ESI
0042368F  0F 85 9F 00 00 00         JNZ 0x00423734
00423695  6A 01                     PUSH 0x1
00423697  6A 02                     PUSH 0x2
00423699  50                        PUSH EAX
0042369A  50                        PUSH EAX
0042369B  E8 F0 AB 28 00            CALL 0x006ae290
004236A0  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
004236A3  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004236A6  33 DB                     XOR EBX,EBX
004236A8  8B 47 29                  MOV EAX,dword ptr [EDI + 0x29]
004236AB  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
004236AE  85 C0                     TEST EAX,EAX
004236B0  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
004236B3  7E 6A                     JLE 0x0042371f
LAB_004236b5:
004236B5  8D 4D FC                  LEA ECX,[EBP + -0x4]
004236B8  8B D3                     MOV EDX,EBX
004236BA  51                        PUSH ECX
004236BB  8B 4F 29                  MOV ECX,dword ptr [EDI + 0x29]
004236BE  E8 AD 95 28 00            CALL 0x006acc70
004236C3  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004236C6  66 3D FF FF               CMP AX,0xffff
004236CA  74 4B                     JZ 0x00423717
004236CC  8A 57 24                  MOV DL,byte ptr [EDI + 0x24]
004236CF  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004236D5  6A 01                     PUSH 0x1
004236D7  50                        PUSH EAX
004236D8  52                        PUSH EDX
004236D9  E8 DC F1 FD FF            CALL 0x004028ba
004236DE  8B F0                     MOV ESI,EAX
004236E0  85 F6                     TEST ESI,ESI
004236E2  75 1A                     JNZ 0x004236fe
004236E4  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
004236E9  68 81 00 00 00            PUSH 0x81
004236EE  68 A4 50 7A 00            PUSH 0x7a50a4
004236F3  50                        PUSH EAX
004236F4  68 04 00 FE AF            PUSH 0xaffe0004
004236F9  E8 42 27 28 00            CALL 0x006a5e40
LAB_004236fe:
004236FE  8B 16                     MOV EDX,dword ptr [ESI]
00423700  8B CE                     MOV ECX,ESI
00423702  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
00423705  3B 45 08                  CMP EAX,dword ptr [EBP + 0x8]
00423708  75 0D                     JNZ 0x00423717
0042370A  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0042370D  8D 45 FC                  LEA EAX,[EBP + -0x4]
00423710  50                        PUSH EAX
00423711  51                        PUSH ECX
00423712  E8 A9 AA 28 00            CALL 0x006ae1c0
LAB_00423717:
00423717  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0042371A  43                        INC EBX
0042371B  3B D8                     CMP EBX,EAX
0042371D  7C 96                     JL 0x004236b5
LAB_0042371f:
0042371F  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
00423722  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00423725  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0042372B  5F                        POP EDI
0042372C  5E                        POP ESI
0042372D  5B                        POP EBX
0042372E  8B E5                     MOV ESP,EBP
00423730  5D                        POP EBP
00423731  C2 04 00                  RET 0x4
LAB_00423734:
00423734  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
00423737  68 04 51 7A 00            PUSH 0x7a5104
0042373C  68 CC 4C 7A 00            PUSH 0x7a4ccc
00423741  56                        PUSH ESI
00423742  6A 00                     PUSH 0x0
00423744  68 86 00 00 00            PUSH 0x86
00423749  68 A4 50 7A 00            PUSH 0x7a50a4
0042374E  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00423753  E8 78 9D 28 00            CALL 0x006ad4d0
00423758  83 C4 18                  ADD ESP,0x18
0042375B  85 C0                     TEST EAX,EAX
0042375D  74 01                     JZ 0x00423760
0042375F  CC                        INT3
LAB_00423760:
00423760  68 87 00 00 00            PUSH 0x87
00423765  68 A4 50 7A 00            PUSH 0x7a50a4
0042376A  6A 00                     PUSH 0x0
0042376C  56                        PUSH ESI
0042376D  E8 CE 26 28 00            CALL 0x006a5e40
00423772  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00423775  5F                        POP EDI
00423776  5E                        POP ESI
00423777  5B                        POP EBX
00423778  8B E5                     MOV ESP,EBP
0042377A  5D                        POP EBP
0042377B  C2 04 00                  RET 0x4
