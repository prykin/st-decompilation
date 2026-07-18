FUN_00632650:
00632650  55                        PUSH EBP
00632651  8B EC                     MOV EBP,ESP
00632653  83 EC 3C                  SUB ESP,0x3c
00632656  53                        PUSH EBX
00632657  56                        PUSH ESI
00632658  8B F1                     MOV ESI,ECX
0063265A  33 DB                     XOR EBX,EBX
0063265C  57                        PUSH EDI
0063265D  83 3E 00                  CMP dword ptr [ESI],0x0
00632660  74 05                     JZ 0x00632667
00632662  E8 87 23 DD FF            CALL 0x004049ee
LAB_00632667:
00632667  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0063266A  85 D2                     TEST EDX,EDX
0063266C  75 0A                     JNZ 0x00632678
0063266E  C7 45 0C 01 00 00 00      MOV dword ptr [EBP + 0xc],0x1
00632675  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
LAB_00632678:
00632678  B9 0E 00 00 00            MOV ECX,0xe
0063267D  33 C0                     XOR EAX,EAX
0063267F  8D 7D C4                  LEA EDI,[EBP + -0x3c]
00632682  F3 AB                     STOSD.REP ES:EDI
00632684  AA                        STOSB ES:EDI
00632685  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00632688  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0063268B  83 F8 04                  CMP EAX,0x4
0063268E  77 4F                     JA 0x006326df
switchD_00632690::switchD:
00632690  FF 24 85 10 29 63 00      JMP dword ptr [EAX*0x4 + 0x632910]
switchD_00632690::caseD_1:
00632697  6A 0A                     PUSH 0xa
00632699  8D 04 17                  LEA EAX,[EDI + EDX*0x1]
0063269C  6A 39                     PUSH 0x39
0063269E  50                        PUSH EAX
0063269F  6A 00                     PUSH 0x0
006326A1  E8 EA BB 07 00            CALL 0x006ae290
006326A6  89 06                     MOV dword ptr [ESI],EAX
006326A8  8B DF                     MOV EBX,EDI
006326AA  EB 30                     JMP 0x006326dc
switchD_00632690::caseD_3:
006326AC  8D 4F 04                  LEA ECX,[EDI + 0x4]
006326AF  6A 0A                     PUSH 0xa
006326B1  0F AF CA                  IMUL ECX,EDX
006326B4  41                        INC ECX
006326B5  6A 39                     PUSH 0x39
006326B7  51                        PUSH ECX
006326B8  6A 00                     PUSH 0x0
006326BA  E8 D1 BB 07 00            CALL 0x006ae290
006326BF  8B DF                     MOV EBX,EDI
006326C1  89 06                     MOV dword ptr [ESI],EAX
006326C3  0F AF 5D 0C               IMUL EBX,dword ptr [EBP + 0xc]
006326C7  EB 13                     JMP 0x006326dc
switchD_00632690::caseD_0:
006326C9  8B DF                     MOV EBX,EDI
006326CB  6A 0A                     PUSH 0xa
006326CD  0F AF DA                  IMUL EBX,EDX
006326D0  6A 39                     PUSH 0x39
006326D2  53                        PUSH EBX
006326D3  6A 00                     PUSH 0x0
006326D5  E8 B6 BB 07 00            CALL 0x006ae290
006326DA  89 06                     MOV dword ptr [ESI],EAX
LAB_006326dc:
006326DC  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
switchD_00632690::default:
006326DF  8B 06                     MOV EAX,dword ptr [ESI]
006326E1  85 C0                     TEST EAX,EAX
006326E3  0F 84 19 02 00 00         JZ 0x00632902
006326E9  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006326EC  83 F9 04                  CMP ECX,0x4
006326EF  0F 87 C0 01 00 00         JA 0x006328b5
switchD_006326f5::switchD:
006326F5  FF 24 8D 24 29 63 00      JMP dword ptr [ECX*0x4 + 0x632924]
switchD_006326f5::caseD_0:
006326FC  83 F9 01                  CMP ECX,0x1
006326FF  8D 4D C4                  LEA ECX,[EBP + -0x3c]
00632702  51                        PUSH ECX
00632703  8D 54 17 FF               LEA EDX,[EDI + EDX*0x1 + -0x1]
00632707  74 03                     JZ 0x0063270c
00632709  8D 57 FF                  LEA EDX,[EDI + -0x1]
LAB_0063270c:
0063270C  52                        PUSH EDX
0063270D  50                        PUSH EAX
0063270E  E8 2D BA 07 00            CALL 0x006ae140
00632713  8B 06                     MOV EAX,dword ptr [ESI]
00632715  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00632718  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0063271B  8B 58 0C                  MOV EBX,dword ptr [EAX + 0xc]
0063271E  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00632721  89 46 0D                  MOV dword ptr [ESI + 0xd],EAX
00632724  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00632727  C6 46 04 01               MOV byte ptr [ESI + 0x4],0x1
0063272B  89 7E 19                  MOV dword ptr [ESI + 0x19],EDI
0063272E  89 4E 1D                  MOV dword ptr [ESI + 0x1d],ECX
00632731  89 56 11                  MOV dword ptr [ESI + 0x11],EDX
00632734  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
00632737  89 8E A1 00 00 00         MOV dword ptr [ESI + 0xa1],ECX
0063273D  8B 50 14                  MOV EDX,dword ptr [EAX + 0x14]
00632740  89 96 A5 00 00 00         MOV dword ptr [ESI + 0xa5],EDX
00632746  8B 48 18                  MOV ECX,dword ptr [EAX + 0x18]
00632749  89 8E A9 00 00 00         MOV dword ptr [ESI + 0xa9],ECX
0063274F  8B 50 48                  MOV EDX,dword ptr [EAX + 0x48]
00632752  89 56 15                  MOV dword ptr [ESI + 0x15],EDX
00632755  E9 5B 01 00 00            JMP 0x006328b5
switchD_006326f5::caseD_2:
0063275A  8D 4D C4                  LEA ECX,[EBP + -0x3c]
0063275D  51                        PUSH ECX
0063275E  8B CF                     MOV ECX,EDI
00632760  0F AF CA                  IMUL ECX,EDX
00632763  49                        DEC ECX
00632764  51                        PUSH ECX
00632765  50                        PUSH EAX
00632766  E8 D5 B9 07 00            CALL 0x006ae140
0063276B  8B 16                     MOV EDX,dword ptr [ESI]
0063276D  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00632770  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00632773  8B 5A 0C                  MOV EBX,dword ptr [EDX + 0xc]
00632776  89 46 1D                  MOV dword ptr [ESI + 0x1d],EAX
00632779  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0063277C  C6 46 04 01               MOV byte ptr [ESI + 0x4],0x1
00632780  89 7E 19                  MOV dword ptr [ESI + 0x19],EDI
00632783  C7 46 11 02 00 00 00      MOV dword ptr [ESI + 0x11],0x2
0063278A  89 4E 0D                  MOV dword ptr [ESI + 0xd],ECX
0063278D  8B 50 10                  MOV EDX,dword ptr [EAX + 0x10]
00632790  89 96 A1 00 00 00         MOV dword ptr [ESI + 0xa1],EDX
00632796  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
00632799  89 8E A5 00 00 00         MOV dword ptr [ESI + 0xa5],ECX
0063279F  8B 50 18                  MOV EDX,dword ptr [EAX + 0x18]
006327A2  89 96 A9 00 00 00         MOV dword ptr [ESI + 0xa9],EDX
006327A8  8B 48 4C                  MOV ECX,dword ptr [EAX + 0x4c]
006327AB  89 8E AD 00 00 00         MOV dword ptr [ESI + 0xad],ECX
006327B1  8B 50 48                  MOV EDX,dword ptr [EAX + 0x48]
006327B4  89 56 15                  MOV dword ptr [ESI + 0x15],EDX
006327B7  E9 F9 00 00 00            JMP 0x006328b5
switchD_006326f5::caseD_3:
006327BC  8D 5F 04                  LEA EBX,[EDI + 0x4]
006327BF  8D 4D C4                  LEA ECX,[EBP + -0x3c]
006327C2  0F AF DA                  IMUL EBX,EDX
006327C5  43                        INC EBX
006327C6  51                        PUSH ECX
006327C7  53                        PUSH EBX
006327C8  50                        PUSH EAX
006327C9  89 5E 21                  MOV dword ptr [ESI + 0x21],EBX
006327CC  C7 46 11 03 00 00 00      MOV dword ptr [ESI + 0x11],0x3
006327D3  E8 68 B9 07 00            CALL 0x006ae140
006327D8  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006327DB  C6 46 04 01               MOV byte ptr [ESI + 0x4],0x1
006327DF  8B 10                     MOV EDX,dword ptr [EAX]
006327E1  89 56 19                  MOV dword ptr [ESI + 0x19],EDX
006327E4  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
006327E7  89 4E 1D                  MOV dword ptr [ESI + 0x1d],ECX
006327EA  8B 50 10                  MOV EDX,dword ptr [EAX + 0x10]
006327ED  89 96 9D 00 00 00         MOV dword ptr [ESI + 0x9d],EDX
006327F3  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
006327F6  89 8E A1 00 00 00         MOV dword ptr [ESI + 0xa1],ECX
006327FC  8B 50 18                  MOV EDX,dword ptr [EAX + 0x18]
006327FF  89 96 A5 00 00 00         MOV dword ptr [ESI + 0xa5],EDX
00632805  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00632808  89 4E 25                  MOV dword ptr [ESI + 0x25],ECX
0063280B  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
0063280E  89 56 29                  MOV dword ptr [ESI + 0x29],EDX
00632811  C7 46 41 00 00 00 00      MOV dword ptr [ESI + 0x41],0x0
00632818  C7 46 45 DB 0F 49 3F      MOV dword ptr [ESI + 0x45],0x3f490fdb
0063281F  D9 40 30                  FLD float ptr [EAX + 0x30]
00632822  D8 0D A4 D1 79 00         FMUL float ptr [0x0079d1a4]
00632828  D9 5E 6D                  FSTP float ptr [ESI + 0x6d]
0063282B  D9 40 2C                  FLD float ptr [EAX + 0x2c]
0063282E  D8 0D A4 D1 79 00         FMUL float ptr [0x0079d1a4]
00632834  D9 5E 69                  FSTP float ptr [ESI + 0x69]
00632837  8B 48 24                  MOV ECX,dword ptr [EAX + 0x24]
0063283A  89 8E 81 00 00 00         MOV dword ptr [ESI + 0x81],ECX
00632840  8B 50 28                  MOV EDX,dword ptr [EAX + 0x28]
00632843  89 96 85 00 00 00         MOV dword ptr [ESI + 0x85],EDX
00632849  C7 86 89 00 00 00 92 0A 86 3F  MOV dword ptr [ESI + 0x89],0x3f860a92
00632853  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
00632856  89 4E 61                  MOV dword ptr [ESI + 0x61],ECX
00632859  8B 50 20                  MOV EDX,dword ptr [EAX + 0x20]
0063285C  89 56 65                  MOV dword ptr [ESI + 0x65],EDX
0063285F  EB 54                     JMP 0x006328b5
switchD_006326f5::caseD_4:
00632861  8D 4D C4                  LEA ECX,[EBP + -0x3c]
00632864  51                        PUSH ECX
00632865  8B CF                     MOV ECX,EDI
00632867  0F AF CA                  IMUL ECX,EDX
0063286A  49                        DEC ECX
0063286B  51                        PUSH ECX
0063286C  50                        PUSH EAX
0063286D  E8 CE B8 07 00            CALL 0x006ae140
00632872  8B 16                     MOV EDX,dword ptr [ESI]
00632874  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00632877  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0063287A  8B 5A 0C                  MOV EBX,dword ptr [EDX + 0xc]
0063287D  89 46 1D                  MOV dword ptr [ESI + 0x1d],EAX
00632880  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00632883  C6 46 04 01               MOV byte ptr [ESI + 0x4],0x1
00632887  89 7E 19                  MOV dword ptr [ESI + 0x19],EDI
0063288A  C7 46 11 04 00 00 00      MOV dword ptr [ESI + 0x11],0x4
00632891  89 4E 0D                  MOV dword ptr [ESI + 0xd],ECX
00632894  8B 50 10                  MOV EDX,dword ptr [EAX + 0x10]
00632897  89 96 A1 00 00 00         MOV dword ptr [ESI + 0xa1],EDX
0063289D  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
006328A0  89 8E A5 00 00 00         MOV dword ptr [ESI + 0xa5],ECX
006328A6  8B 50 18                  MOV EDX,dword ptr [EAX + 0x18]
006328A9  89 96 A9 00 00 00         MOV dword ptr [ESI + 0xa9],EDX
006328AF  8B 40 48                  MOV EAX,dword ptr [EAX + 0x48]
006328B2  89 46 15                  MOV dword ptr [ESI + 0x15],EAX
switchD_006326f5::default:
006328B5  8B CE                     MOV ECX,ESI
006328B7  E8 40 36 DD FF            CALL 0x00405efc
006328BC  8B CE                     MOV ECX,ESI
006328BE  E8 FE 0C DD FF            CALL 0x004035c1
006328C3  8A 4E 04                  MOV CL,byte ptr [ESI + 0x4]
006328C6  B8 01 00 00 00            MOV EAX,0x1
006328CB  84 C9                     TEST CL,CL
006328CD  75 35                     JNZ 0x00632904
006328CF  33 C9                     XOR ECX,ECX
006328D1  85 DB                     TEST EBX,EBX
006328D3  7E 1F                     JLE 0x006328f4
006328D5  83 CF FF                  OR EDI,0xffffffff
LAB_006328d8:
006328D8  8B 16                     MOV EDX,dword ptr [ESI]
006328DA  3B 4A 0C                  CMP ECX,dword ptr [EDX + 0xc]
006328DD  73 0B                     JNC 0x006328ea
006328DF  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
006328E2  0F AF C1                  IMUL EAX,ECX
006328E5  03 42 1C                  ADD EAX,dword ptr [EDX + 0x1c]
006328E8  EB 02                     JMP 0x006328ec
LAB_006328ea:
006328EA  33 C0                     XOR EAX,EAX
LAB_006328ec:
006328EC  41                        INC ECX
006328ED  89 78 04                  MOV dword ptr [EAX + 0x4],EDI
006328F0  3B CB                     CMP ECX,EBX
006328F2  7C E4                     JL 0x006328d8
LAB_006328f4:
006328F4  5F                        POP EDI
006328F5  5E                        POP ESI
006328F6  B8 01 00 00 00            MOV EAX,0x1
006328FB  5B                        POP EBX
006328FC  8B E5                     MOV ESP,EBP
006328FE  5D                        POP EBP
006328FF  C2 14 00                  RET 0x14
LAB_00632902:
00632902  33 C0                     XOR EAX,EAX
LAB_00632904:
00632904  5F                        POP EDI
00632905  5E                        POP ESI
00632906  5B                        POP EBX
00632907  8B E5                     MOV ESP,EBP
00632909  5D                        POP EBP
0063290A  C2 14 00                  RET 0x14
