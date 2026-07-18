PanelTy::CreateBut:
00538690  55                        PUSH EBP
00538691  8B EC                     MOV EBP,ESP
00538693  81 EC CC 01 00 00         SUB ESP,0x1cc
00538699  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0053869E  53                        PUSH EBX
0053869F  56                        PUSH ESI
005386A0  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
005386A3  33 DB                     XOR EBX,EBX
005386A5  57                        PUSH EDI
005386A6  8D 95 38 FE FF FF         LEA EDX,[EBP + 0xfffffe38]
005386AC  8D 8D 34 FE FF FF         LEA ECX,[EBP + 0xfffffe34]
005386B2  53                        PUSH EBX
005386B3  52                        PUSH EDX
005386B4  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
005386B7  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
005386BA  89 85 34 FE FF FF         MOV dword ptr [EBP + 0xfffffe34],EAX
005386C0  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005386C6  E8 25 51 1F 00            CALL 0x0072d7f0
005386CB  8B F0                     MOV ESI,EAX
005386CD  83 C4 08                  ADD ESP,0x8
005386D0  3B F3                     CMP ESI,EBX
005386D2  0F 85 08 02 00 00         JNZ 0x005388e0
005386D8  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
005386DB  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
005386DE  B9 5F 00 00 00            MOV ECX,0x5f
005386E3  33 C0                     XOR EAX,EAX
005386E5  8D BD 78 FE FF FF         LEA EDI,[EBP + 0xfffffe78]
005386EB  52                        PUSH EDX
005386EC  F3 AB                     STOSD.REP ES:EDI
005386EE  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005386F1  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
005386F4  8D 7E 6C                  LEA EDI,[ESI + 0x6c]
005386F7  68 1C 18 7C 00            PUSH 0x7c181c
005386FC  57                        PUSH EDI
005386FD  89 85 7C FE FF FF         MOV dword ptr [EBP + 0xfffffe7c],EAX
00538703  89 8D 78 FE FF FF         MOV dword ptr [EBP + 0xfffffe78],ECX
00538709  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0053870F  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
00538715  83 C4 0C                  ADD ESP,0xc
00538718  6A 01                     PUSH 0x1
0053871A  53                        PUSH EBX
0053871B  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
0053871E  57                        PUSH EDI
0053871F  53                        PUSH EBX
00538720  E8 BB 95 1B 00            CALL 0x006f1ce0
00538725  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00538728  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
0053872B  89 8D 88 FE FF FF         MOV dword ptr [EBP + 0xfffffe88],ECX
00538731  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
00538734  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00538737  80 FB 01                  CMP BL,0x1
0053873A  85 C0                     TEST EAX,EAX
0053873C  89 95 8C FE FF FF         MOV dword ptr [EBP + 0xfffffe8c],EDX
00538742  74 0C                     JZ 0x00538750
00538744  8B 46 5C                  MOV EAX,dword ptr [ESI + 0x5c]
00538747  85 C0                     TEST EAX,EAX
00538749  A1 30 67 80 00            MOV EAX,[0x00806730]
0053874E  74 03                     JZ 0x00538753
LAB_00538750:
00538750  8B 46 3C                  MOV EAX,dword ptr [ESI + 0x3c]
LAB_00538753:
00538753  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00538756  03 C1                     ADD EAX,ECX
00538758  89 85 80 FE FF FF         MOV dword ptr [EBP + 0xfffffe80],EAX
0053875E  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00538761  85 C0                     TEST EAX,EAX
00538763  74 0C                     JZ 0x00538771
00538765  8B 46 5C                  MOV EAX,dword ptr [ESI + 0x5c]
00538768  85 C0                     TEST EAX,EAX
0053876A  A1 34 67 80 00            MOV EAX,[0x00806734]
0053876F  74 03                     JZ 0x00538774
LAB_00538771:
00538771  8B 46 44                  MOV EAX,dword ptr [ESI + 0x44]
LAB_00538774:
00538774  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00538777  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
0053877D  03 C2                     ADD EAX,EDX
0053877F  89 85 84 FE FF FF         MOV dword ptr [EBP + 0xfffffe84],EAX
00538785  8D 45 F8                  LEA EAX,[EBP + -0x8]
00538788  50                        PUSH EAX
00538789  E8 52 99 1B 00            CALL 0x006f20e0
0053878E  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
00538791  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
00538794  89 85 B8 FE FF FF         MOV dword ptr [EBP + 0xfffffeb8],EAX
0053879A  89 85 98 FE FF FF         MOV dword ptr [EBP + 0xfffffe98],EAX
005387A0  89 85 D8 FE FF FF         MOV dword ptr [EBP + 0xfffffed8],EAX
005387A6  66 8B 45 30               MOV AX,word ptr [EBP + 0x30]
005387AA  89 8D C0 FE FF FF         MOV dword ptr [EBP + 0xfffffec0],ECX
005387B0  89 8D A0 FE FF FF         MOV dword ptr [EBP + 0xfffffea0],ECX
005387B6  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
005387B9  BB 02 00 00 00            MOV EBX,0x2
005387BE  BF 01 00 00 00            MOV EDI,0x1
005387C3  89 9D BC FE FF FF         MOV dword ptr [EBP + 0xfffffebc],EBX
005387C9  66 85 C0                  TEST AX,AX
005387CC  89 9D 9C FE FF FF         MOV dword ptr [EBP + 0xfffffe9c],EBX
005387D2  C7 85 A8 FE FF FF 00 00 00 00  MOV dword ptr [EBP + 0xfffffea8],0x0
005387DC  89 BD C8 FE FF FF         MOV dword ptr [EBP + 0xfffffec8],EDI
005387E2  89 9D DC FE FF FF         MOV dword ptr [EBP + 0xfffffedc],EBX
005387E8  89 8D E0 FE FF FF         MOV dword ptr [EBP + 0xfffffee0],ECX
005387EE  89 7D 80                  MOV dword ptr [EBP + -0x80],EDI
005387F1  89 7D 84                  MOV dword ptr [EBP + -0x7c],EDI
005387F4  0F 84 83 00 00 00         JZ 0x0053887d
005387FA  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
005387FD  66 8B 4D 34               MOV CX,word ptr [EBP + 0x34]
00538801  8B 55 38                  MOV EDX,dword ptr [EBP + 0x38]
00538804  89 9D 34 FF FF FF         MOV dword ptr [EBP + 0xffffff34],EBX
0053880A  C7 85 F8 FE FF FF 01 01 00 00  MOV dword ptr [EBP + 0xfffffef8],0x101
00538814  C7 85 FC FE FF FF 03 00 00 00  MOV dword ptr [EBP + 0xfffffefc],0x3
0053881E  C7 85 00 FF FF FF 01 42 00 00  MOV dword ptr [EBP + 0xffffff00],0x4201
00538828  66 89 8D 04 FF FF FF      MOV word ptr [EBP + 0xffffff04],CX
0053882F  66 89 85 06 FF FF FF      MOV word ptr [EBP + 0xffffff06],AX
00538836  89 95 08 FF FF FF         MOV dword ptr [EBP + 0xffffff08],EDX
0053883C  C7 85 10 FF FF FF 00 00 00 00  MOV dword ptr [EBP + 0xffffff10],0x0
00538846  C7 85 1C FF FF FF 01 01 00 00  MOV dword ptr [EBP + 0xffffff1c],0x101
00538850  C7 85 20 FF FF FF 03 00 00 00  MOV dword ptr [EBP + 0xffffff20],0x3
0053885A  C7 85 24 FF FF FF 02 42 00 00  MOV dword ptr [EBP + 0xffffff24],0x4202
00538864  66 89 8D 28 FF FF FF      MOV word ptr [EBP + 0xffffff28],CX
0053886B  66 89 85 2A FF FF FF      MOV word ptr [EBP + 0xffffff2a],AX
00538872  89 95 2C FF FF FF         MOV dword ptr [EBP + 0xffffff2c],EDX
00538878  BB 02 00 00 00            MOV EBX,0x2
LAB_0053887d:
0053887D  8B 45 3C                  MOV EAX,dword ptr [EBP + 0x3c]
00538880  85 C0                     TEST EAX,EAX
00538882  74 2C                     JZ 0x005388b0
00538884  8B 15 90 67 80 00         MOV EDX,dword ptr [0x00806790]
0053888A  57                        PUSH EDI
0053888B  6A 00                     PUSH 0x0
0053888D  50                        PUSH EAX
0053888E  52                        PUSH EDX
0053888F  E8 DC 21 1D 00            CALL 0x0070aa70
00538894  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
0053889A  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
0053889D  8B 45 3C                  MOV EAX,dword ptr [EBP + 0x3c]
005388A0  57                        PUSH EDI
005388A1  50                        PUSH EAX
005388A2  6A 12                     PUSH 0x12
005388A4  51                        PUSH ECX
005388A5  E8 46 1E 1D 00            CALL 0x0070a6f0
005388AA  83 C4 20                  ADD ESP,0x20
005388AD  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
LAB_005388b0:
005388B0  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005388B3  8D 85 78 FE FF FF         LEA EAX,[EBP + 0xfffffe78]
005388B9  6A 00                     PUSH 0x0
005388BB  50                        PUSH EAX
005388BC  8B 11                     MOV EDX,dword ptr [ECX]
005388BE  8D 45 FC                  LEA EAX,[EBP + -0x4]
005388C1  6A 00                     PUSH 0x0
005388C3  50                        PUSH EAX
005388C4  53                        PUSH EBX
005388C5  FF 52 08                  CALL dword ptr [EDX + 0x8]
005388C8  8B 8D 34 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffe34]
005388CE  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005388D1  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005388D7  5F                        POP EDI
005388D8  5E                        POP ESI
005388D9  5B                        POP EBX
005388DA  8B E5                     MOV ESP,EBP
005388DC  5D                        POP EBP
005388DD  C2 3C 00                  RET 0x3c
LAB_005388e0:
005388E0  8B 95 34 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffe34]
005388E6  68 14 74 7C 00            PUSH 0x7c7414
005388EB  68 CC 4C 7A 00            PUSH 0x7a4ccc
005388F0  56                        PUSH ESI
005388F1  53                        PUSH EBX
005388F2  68 97 00 00 00            PUSH 0x97
005388F7  68 90 73 7C 00            PUSH 0x7c7390
005388FC  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00538902  E8 C9 4B 17 00            CALL 0x006ad4d0
00538907  83 C4 18                  ADD ESP,0x18
0053890A  85 C0                     TEST EAX,EAX
0053890C  74 01                     JZ 0x0053890f
0053890E  CC                        INT3
LAB_0053890f:
0053890F  68 97 00 00 00            PUSH 0x97
00538914  68 90 73 7C 00            PUSH 0x7c7390
00538919  53                        PUSH EBX
0053891A  56                        PUSH ESI
0053891B  E8 20 D5 16 00            CALL 0x006a5e40
00538920  5F                        POP EDI
00538921  5E                        POP ESI
00538922  33 C0                     XOR EAX,EAX
00538924  5B                        POP EBX
00538925  8B E5                     MOV ESP,EBP
00538927  5D                        POP EBP
00538928  C2 3C 00                  RET 0x3c
