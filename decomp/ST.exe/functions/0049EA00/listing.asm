FUN_0049ea00:
0049EA00  55                        PUSH EBP
0049EA01  8B EC                     MOV EBP,ESP
0049EA03  83 EC 68                  SUB ESP,0x68
0049EA06  8B 41 29                  MOV EAX,dword ptr [ECX + 0x29]
0049EA09  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
0049EA0F  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0049EA12  53                        PUSH EBX
0049EA13  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0049EA16  56                        PUSH ESI
0049EA17  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0049EA1A  57                        PUSH EDI
0049EA1B  8D 4D 9C                  LEA ECX,[EBP + -0x64]
0049EA1E  8D 45 98                  LEA EAX,[EBP + -0x68]
0049EA21  6A 00                     PUSH 0x0
0049EA23  51                        PUSH ECX
0049EA24  C7 45 EC 02 00 00 00      MOV dword ptr [EBP + -0x14],0x2
0049EA2B  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
0049EA32  89 55 98                  MOV dword ptr [EBP + -0x68],EDX
0049EA35  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0049EA3A  E8 B1 ED 28 00            CALL 0x0072d7f0
0049EA3F  8B F0                     MOV ESI,EAX
0049EA41  83 C4 08                  ADD ESP,0x8
0049EA44  85 F6                     TEST ESI,ESI
0049EA46  0F 85 E7 01 00 00         JNZ 0x0049ec33
0049EA4C  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0049EA4F  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
0049EA52  85 C0                     TEST EAX,EAX
0049EA54  74 09                     JZ 0x0049ea5f
0049EA56  83 F8 01                  CMP EAX,0x1
0049EA59  0F 85 19 01 00 00         JNZ 0x0049eb78
LAB_0049ea5f:
0049EA5F  B9 15 00 00 00            MOV ECX,0x15
0049EA64  33 C0                     XOR EAX,EAX
0049EA66  8D BB 89 00 00 00         LEA EDI,[EBX + 0x89]
0049EA6C  8D 93 82 01 00 00         LEA EDX,[EBX + 0x182]
0049EA72  F3 AB                     STOSD.REP ES:EDI
0049EA74  33 FF                     XOR EDI,EDI
0049EA76  8D 83 B3 02 00 00         LEA EAX,[EBX + 0x2b3]
0049EA7C  89 7B 65                  MOV dword ptr [EBX + 0x65],EDI
0049EA7F  8B 32                     MOV ESI,dword ptr [EDX]
0049EA81  8B C8                     MOV ECX,EAX
0049EA83  89 31                     MOV dword ptr [ECX],ESI
0049EA85  8B 72 04                  MOV ESI,dword ptr [EDX + 0x4]
0049EA88  89 71 04                  MOV dword ptr [ECX + 0x4],ESI
0049EA8B  66 8B 52 08               MOV DX,word ptr [EDX + 0x8]
0049EA8F  66 89 51 08               MOV word ptr [ECX + 0x8],DX
0049EA93  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0049EA99  66 8B 10                  MOV DX,word ptr [EAX]
0049EA9C  66 8B 83 B5 02 00 00      MOV AX,word ptr [EBX + 0x2b5]
0049EAA3  8B 89 E4 00 00 00         MOV ECX,dword ptr [ECX + 0xe4]
0049EAA9  66 89 45 E2               MOV word ptr [EBP + -0x1e],AX
0049EAAD  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0049EAB0  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0049EAB3  3B C7                     CMP EAX,EDI
0049EAB5  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
0049EAB8  66 89 55 E0               MOV word ptr [EBP + -0x20],DX
0049EABC  0F 8E 9B 00 00 00         JLE 0x0049eb5d
LAB_0049eac2:
0049EAC2  8D 4D FC                  LEA ECX,[EBP + -0x4]
0049EAC5  8B D7                     MOV EDX,EDI
0049EAC7  51                        PUSH ECX
0049EAC8  8B 4B 29                  MOV ECX,dword ptr [EBX + 0x29]
0049EACB  E8 A0 E1 20 00            CALL 0x006acc70
0049EAD0  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0049EAD3  66 3D FF FF               CMP AX,0xffff
0049EAD7  74 78                     JZ 0x0049eb51
0049EAD9  8A 53 24                  MOV DL,byte ptr [EBX + 0x24]
0049EADC  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0049EAE2  6A 01                     PUSH 0x1
0049EAE4  50                        PUSH EAX
0049EAE5  52                        PUSH EDX
0049EAE6  E8 CF 3D F6 FF            CALL 0x004028ba
0049EAEB  8B F0                     MOV ESI,EAX
0049EAED  85 F6                     TEST ESI,ESI
0049EAEF  75 1A                     JNZ 0x0049eb0b
0049EAF1  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0049EAF6  68 1F 0B 00 00            PUSH 0xb1f
0049EAFB  68 3C BE 7A 00            PUSH 0x7abe3c
0049EB00  50                        PUSH EAX
0049EB01  68 04 00 FE AF            PUSH 0xaffe0004
0049EB06  E8 35 73 20 00            CALL 0x006a5e40
LAB_0049eb0b:
0049EB0B  8B 83 B9 02 00 00         MOV EAX,dword ptr [EBX + 0x2b9]
0049EB11  83 F8 FF                  CMP EAX,-0x1
0049EB14  75 0C                     JNZ 0x0049eb22
0049EB16  8B 86 B6 07 00 00         MOV EAX,dword ptr [ESI + 0x7b6]
0049EB1C  85 C0                     TEST EAX,EAX
0049EB1E  74 24                     JZ 0x0049eb44
0049EB20  EB 08                     JMP 0x0049eb2a
LAB_0049eb22:
0049EB22  39 86 B6 07 00 00         CMP dword ptr [ESI + 0x7b6],EAX
0049EB28  75 1A                     JNZ 0x0049eb44
LAB_0049eb2a:
0049EB2A  8B 86 BE 07 00 00         MOV EAX,dword ptr [ESI + 0x7be]
0049EB30  85 C0                     TEST EAX,EAX
0049EB32  7E 10                     JLE 0x0049eb44
0049EB34  66 8B 4E 4B               MOV CX,word ptr [ESI + 0x4b]
0049EB38  8D 55 DC                  LEA EDX,[EBP + -0x24]
0049EB3B  52                        PUSH EDX
0049EB3C  66 89 4D E4               MOV word ptr [EBP + -0x1c],CX
0049EB40  6A 07                     PUSH 0x7
0049EB42  EB 06                     JMP 0x0049eb4a
LAB_0049eb44:
0049EB44  8D 45 F4                  LEA EAX,[EBP + -0xc]
0049EB47  50                        PUSH EAX
0049EB48  6A 03                     PUSH 0x3
LAB_0049eb4a:
0049EB4A  8B CE                     MOV ECX,ESI
0049EB4C  E8 D5 35 F6 FF            CALL 0x00402126
LAB_0049eb51:
0049EB51  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0049EB54  47                        INC EDI
0049EB55  3B F8                     CMP EDI,EAX
0049EB57  0F 8C 65 FF FF FF         JL 0x0049eac2
LAB_0049eb5d:
0049EB5D  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0049EB63  68 3C 0B 00 00            PUSH 0xb3c
0049EB68  68 3C BE 7A 00            PUSH 0x7abe3c
0049EB6D  51                        PUSH ECX
0049EB6E  68 09 00 FE AF            PUSH 0xaffe0009
0049EB73  E8 C8 72 20 00            CALL 0x006a5e40
LAB_0049eb78:
0049EB78  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0049EB7E  B9 1E 00 00 00            MOV ECX,0x1e
0049EB83  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
0049EB89  33 D2                     XOR EDX,EDX
0049EB8B  F7 F1                     DIV ECX
0049EB8D  83 FA 05                  CMP EDX,0x5
0049EB90  0F 85 88 00 00 00         JNZ 0x0049ec1e
0049EB96  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0049EB99  33 FF                     XOR EDI,EDI
0049EB9B  85 C0                     TEST EAX,EAX
0049EB9D  7E 71                     JLE 0x0049ec10
LAB_0049eb9f:
0049EB9F  8B 4B 29                  MOV ECX,dword ptr [EBX + 0x29]
0049EBA2  8D 55 FC                  LEA EDX,[EBP + -0x4]
0049EBA5  52                        PUSH EDX
0049EBA6  8B D7                     MOV EDX,EDI
0049EBA8  E8 C3 E0 20 00            CALL 0x006acc70
0049EBAD  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0049EBB0  66 3D FF FF               CMP AX,0xffff
0049EBB4  74 4D                     JZ 0x0049ec03
0049EBB6  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0049EBBC  6A 01                     PUSH 0x1
0049EBBE  50                        PUSH EAX
0049EBBF  8A 43 24                  MOV AL,byte ptr [EBX + 0x24]
0049EBC2  50                        PUSH EAX
0049EBC3  E8 F2 3C F6 FF            CALL 0x004028ba
0049EBC8  8B F0                     MOV ESI,EAX
0049EBCA  85 F6                     TEST ESI,ESI
0049EBCC  75 1B                     JNZ 0x0049ebe9
0049EBCE  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0049EBD4  68 43 0B 00 00            PUSH 0xb43
0049EBD9  68 3C BE 7A 00            PUSH 0x7abe3c
0049EBDE  51                        PUSH ECX
0049EBDF  68 04 00 FE AF            PUSH 0xaffe0004
0049EBE4  E8 57 72 20 00            CALL 0x006a5e40
LAB_0049ebe9:
0049EBE9  8B CE                     MOV ECX,ESI
0049EBEB  E8 EC 42 F6 FF            CALL 0x00402edc
0049EBF0  83 F8 07                  CMP EAX,0x7
0049EBF3  74 18                     JZ 0x0049ec0d
0049EBF5  6A 07                     PUSH 0x7
0049EBF7  8B CE                     MOV ECX,ESI
0049EBF9  E8 FB 61 F6 FF            CALL 0x00404df9
0049EBFE  83 F8 01                  CMP EAX,0x1
0049EC01  74 0A                     JZ 0x0049ec0d
LAB_0049ec03:
0049EC03  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0049EC06  47                        INC EDI
0049EC07  3B F8                     CMP EDI,EAX
0049EC09  7C 94                     JL 0x0049eb9f
0049EC0B  EB 03                     JMP 0x0049ec10
LAB_0049ec0d:
0049EC0D  FF 45 F0                  INC dword ptr [EBP + -0x10]
LAB_0049ec10:
0049EC10  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0049EC13  85 C0                     TEST EAX,EAX
0049EC15  75 07                     JNZ 0x0049ec1e
0049EC17  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
LAB_0049ec1e:
0049EC1E  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
0049EC21  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
LAB_0049ec27:
0049EC27  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0049EC2A  5F                        POP EDI
0049EC2B  5E                        POP ESI
0049EC2C  5B                        POP EBX
0049EC2D  8B E5                     MOV ESP,EBP
0049EC2F  5D                        POP EBP
0049EC30  C2 04 00                  RET 0x4
LAB_0049ec33:
0049EC33  8B 45 98                  MOV EAX,dword ptr [EBP + -0x68]
0049EC36  81 FE 09 00 FE AF         CMP ESI,0xaffe0009
0049EC3C  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0049EC41  74 E4                     JZ 0x0049ec27
0049EC43  68 B4 C0 7A 00            PUSH 0x7ac0b4
0049EC48  68 CC 4C 7A 00            PUSH 0x7a4ccc
0049EC4D  56                        PUSH ESI
0049EC4E  6A 00                     PUSH 0x0
0049EC50  68 4C 0B 00 00            PUSH 0xb4c
0049EC55  68 3C BE 7A 00            PUSH 0x7abe3c
0049EC5A  E8 71 E8 20 00            CALL 0x006ad4d0
0049EC5F  83 C4 18                  ADD ESP,0x18
0049EC62  85 C0                     TEST EAX,EAX
0049EC64  74 01                     JZ 0x0049ec67
0049EC66  CC                        INT3
LAB_0049ec67:
0049EC67  68 4D 0B 00 00            PUSH 0xb4d
0049EC6C  68 3C BE 7A 00            PUSH 0x7abe3c
0049EC71  6A 00                     PUSH 0x0
0049EC73  56                        PUSH ESI
0049EC74  E8 C7 71 20 00            CALL 0x006a5e40
0049EC79  5F                        POP EDI
0049EC7A  5E                        POP ESI
0049EC7B  83 C8 FF                  OR EAX,0xffffffff
0049EC7E  5B                        POP EBX
0049EC7F  8B E5                     MOV ESP,EBP
0049EC81  5D                        POP EBP
0049EC82  C2 04 00                  RET 0x4
