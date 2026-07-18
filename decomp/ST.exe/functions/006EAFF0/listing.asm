FUN_006eaff0:
006EAFF0  55                        PUSH EBP
006EAFF1  8B EC                     MOV EBP,ESP
006EAFF3  83 EC 24                  SUB ESP,0x24
006EAFF6  8B 81 10 03 00 00         MOV EAX,dword ptr [ECX + 0x310]
006EAFFC  53                        PUSH EBX
006EAFFD  56                        PUSH ESI
006EAFFE  8B B1 1C 03 00 00         MOV ESI,dword ptr [ECX + 0x31c]
006EB004  57                        PUSH EDI
006EB005  33 FF                     XOR EDI,EDI
006EB007  3B C7                     CMP EAX,EDI
006EB009  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
006EB00C  89 7D E0                  MOV dword ptr [EBP + -0x20],EDI
006EB00F  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
006EB012  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
006EB015  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
006EB018  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
006EB01B  0F 8E C1 01 00 00         JLE 0x006eb1e2
006EB021  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
006EB024  C7 45 EC C8 00 00 00      MOV dword ptr [EBP + -0x14],0xc8
LAB_006eb02b:
006EB02B  8B 06                     MOV EAX,dword ptr [ESI]
006EB02D  25 01 80 00 00            AND EAX,0x8001
006EB032  3D 01 80 00 00            CMP EAX,0x8001
006EB037  0F 85 75 01 00 00         JNZ 0x006eb1b2
006EB03D  39 7E 18                  CMP dword ptr [ESI + 0x18],EDI
006EB040  0F 84 6C 01 00 00         JZ 0x006eb1b2
006EB046  8B 46 54                  MOV EAX,dword ptr [ESI + 0x54]
006EB049  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006EB04C  3B D0                     CMP EDX,EAX
006EB04E  0F 8C 5E 01 00 00         JL 0x006eb1b2
006EB054  8B 5E 5C                  MOV EBX,dword ptr [ESI + 0x5c]
006EB057  03 D8                     ADD EBX,EAX
006EB059  3B D3                     CMP EDX,EBX
006EB05B  0F 8D 51 01 00 00         JGE 0x006eb1b2
006EB061  8B 46 58                  MOV EAX,dword ptr [ESI + 0x58]
006EB064  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006EB067  3B D0                     CMP EDX,EAX
006EB069  0F 8C 43 01 00 00         JL 0x006eb1b2
006EB06F  8B 5E 60                  MOV EBX,dword ptr [ESI + 0x60]
006EB072  03 D8                     ADD EBX,EAX
006EB074  3B D3                     CMP EDX,EBX
006EB076  0F 8D 36 01 00 00         JGE 0x006eb1b2
006EB07C  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006EB07F  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006EB082  3B C8                     CMP ECX,EAX
006EB084  7C 2C                     JL 0x006eb0b2
006EB086  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006EB089  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006EB08C  52                        PUSH EDX
006EB08D  50                        PUSH EAX
006EB08E  E8 BD 4A FD FF            CALL 0x006bfb50
006EB093  3B C7                     CMP EAX,EDI
006EB095  0F 84 34 01 00 00         JZ 0x006eb1cf
006EB09B  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006EB09E  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006EB0A1  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006EB0A4  83 C1 0A                  ADD ECX,0xa
006EB0A7  05 C8 00 00 00            ADD EAX,0xc8
006EB0AC  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
006EB0AF  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
LAB_006eb0b2:
006EB0B2  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006EB0B5  8B 5E 14                  MOV EBX,dword ptr [ESI + 0x14]
006EB0B8  85 C0                     TEST EAX,EAX
006EB0BA  76 67                     JBE 0x006eb123
006EB0BC  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
006EB0BF  8B 91 1C 03 00 00         MOV EDX,dword ptr [ECX + 0x31c]
006EB0C5  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
006EB0C8  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
LAB_006eb0cb:
006EB0CB  8B 0A                     MOV ECX,dword ptr [EDX]
006EB0CD  8D 04 49                  LEA EAX,[ECX + ECX*0x2]
006EB0D0  C1 E0 03                  SHL EAX,0x3
006EB0D3  2B C1                     SUB EAX,ECX
006EB0D5  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
006EB0D8  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006EB0DB  8D 0C 81                  LEA ECX,[ECX + EAX*0x4]
006EB0DE  8B 41 14                  MOV EAX,dword ptr [ECX + 0x14]
006EB0E1  3B D8                     CMP EBX,EAX
006EB0E3  7C 17                     JL 0x006eb0fc
006EB0E5  75 08                     JNZ 0x006eb0ef
006EB0E7  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
006EB0EA  3B 41 0C                  CMP EAX,dword ptr [ECX + 0xc]
006EB0ED  7C 0D                     JL 0x006eb0fc
LAB_006eb0ef:
006EB0EF  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006EB0F2  47                        INC EDI
006EB0F3  83 C2 14                  ADD EDX,0x14
006EB0F6  3B F8                     CMP EDI,EAX
006EB0F8  7C D1                     JL 0x006eb0cb
006EB0FA  EB 27                     JMP 0x006eb123
LAB_006eb0fc:
006EB0FC  3B 7D F8                  CMP EDI,dword ptr [EBP + -0x8]
006EB0FF  7D 22                     JGE 0x006eb123
006EB101  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006EB104  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006EB107  8D 0C BF                  LEA ECX,[EDI + EDI*0x4]
006EB10A  C1 E1 02                  SHL ECX,0x2
006EB10D  2B D1                     SUB EDX,ECX
006EB10F  03 C8                     ADD ECX,EAX
006EB111  52                        PUSH EDX
006EB112  51                        PUSH ECX
006EB113  8D 4C BF 05               LEA ECX,[EDI + EDI*0x4 + 0x5]
006EB117  8D 14 88                  LEA EDX,[EAX + ECX*0x4]
006EB11A  52                        PUSH EDX
006EB11B  E8 50 29 04 00            CALL 0x0072da70
006EB120  83 C4 0C                  ADD ESP,0xc
LAB_006eb123:
006EB123  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006EB126  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
006EB129  8D 0C BF                  LEA ECX,[EDI + EDI*0x4]
006EB12C  C1 E1 02                  SHL ECX,0x2
006EB12F  89 04 11                  MOV dword ptr [ECX + EDX*0x1],EAX
006EB132  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006EB135  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
006EB138  89 44 11 04               MOV dword ptr [ECX + EDX*0x1 + 0x4],EAX
006EB13C  8A 46 04                  MOV AL,byte ptr [ESI + 0x4]
006EB13F  8B 7E 54                  MOV EDI,dword ptr [ESI + 0x54]
006EB142  A8 04                     TEST AL,0x4
006EB144  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006EB147  74 11                     JZ 0x006eb15a
006EB149  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006EB14C  2B C7                     SUB EAX,EDI
006EB14E  89 44 11 08               MOV dword ptr [ECX + EDX*0x1 + 0x8],EAX
006EB152  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006EB155  2B 46 58                  SUB EAX,dword ptr [ESI + 0x58]
006EB158  EB 32                     JMP 0x006eb18c
LAB_006eb15a:
006EB15A  2B C7                     SUB EAX,EDI
006EB15C  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
006EB15F  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006EB162  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006EB165  C1 E0 02                  SHL EAX,0x2
006EB168  99                        CDQ
006EB169  F7 BF F0 02 00 00         IDIV dword ptr [EDI + 0x2f0]
006EB16F  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006EB172  89 44 11 08               MOV dword ptr [ECX + EDX*0x1 + 0x8],EAX
006EB176  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006EB179  2B 46 58                  SUB EAX,dword ptr [ESI + 0x58]
006EB17C  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006EB17F  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006EB182  C1 E0 02                  SHL EAX,0x2
006EB185  99                        CDQ
006EB186  F7 BF F4 02 00 00         IDIV dword ptr [EDI + 0x2f4]
LAB_006eb18c:
006EB18C  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006EB18F  89 44 11 0C               MOV dword ptr [ECX + EDX*0x1 + 0xc],EAX
006EB193  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006EB196  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
006EB199  89 44 11 10               MOV dword ptr [ECX + EDX*0x1 + 0x10],EAX
006EB19D  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006EB1A0  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006EB1A3  41                        INC ECX
006EB1A4  83 C0 14                  ADD EAX,0x14
006EB1A7  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006EB1AA  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
006EB1AD  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006EB1B0  33 FF                     XOR EDI,EDI
LAB_006eb1b2:
006EB1B2  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
006EB1B5  8B 91 10 03 00 00         MOV EDX,dword ptr [ECX + 0x310]
006EB1BB  40                        INC EAX
006EB1BC  81 C6 14 01 00 00         ADD ESI,0x114
006EB1C2  3B C2                     CMP EAX,EDX
006EB1C4  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
006EB1C7  0F 8C 5E FE FF FF         JL 0x006eb02b
006EB1CD  EB 13                     JMP 0x006eb1e2
LAB_006eb1cf:
006EB1CF  8D 45 FC                  LEA EAX,[EBP + -0x4]
006EB1D2  50                        PUSH EAX
006EB1D3  E8 88 FE FB FF            CALL 0x006ab060
006EB1D8  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
006EB1DB  C7 45 E0 FE FF FF FF      MOV dword ptr [EBP + -0x20],0xfffffffe
LAB_006eb1e2:
006EB1E2  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006EB1E5  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006EB1E8  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006EB1EB  8B 75 E0                  MOV ESI,dword ptr [EBP + -0x20]
006EB1EE  89 11                     MOV dword ptr [ECX],EDX
006EB1F0  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006EB1F3  3B F7                     CMP ESI,EDI
006EB1F5  89 08                     MOV dword ptr [EAX],ECX
006EB1F7  74 22                     JZ 0x006eb21b
006EB1F9  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006EB1FF  68 3D 07 00 00            PUSH 0x73d
006EB204  68 4C EF 7E 00            PUSH 0x7eef4c
006EB209  52                        PUSH EDX
006EB20A  56                        PUSH ESI
006EB20B  E8 30 AC FB FF            CALL 0x006a5e40
006EB210  8B C6                     MOV EAX,ESI
006EB212  5F                        POP EDI
006EB213  5E                        POP ESI
006EB214  5B                        POP EBX
006EB215  8B E5                     MOV ESP,EBP
006EB217  5D                        POP EBP
006EB218  C2 10 00                  RET 0x10
LAB_006eb21b:
006EB21B  5F                        POP EDI
006EB21C  5E                        POP ESI
006EB21D  33 C0                     XOR EAX,EAX
006EB21F  5B                        POP EBX
006EB220  8B E5                     MOV ESP,EBP
006EB222  5D                        POP EBP
006EB223  C2 10 00                  RET 0x10
