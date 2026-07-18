FUN_00708650:
00708650  55                        PUSH EBP
00708651  8B EC                     MOV EBP,ESP
00708653  6A FF                     PUSH -0x1
00708655  68 00 E2 79 00            PUSH 0x79e200
0070865A  68 64 D9 72 00            PUSH 0x72d964
0070865F  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
00708665  50                        PUSH EAX
00708666  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
0070866D  83 EC 74                  SUB ESP,0x74
00708670  53                        PUSH EBX
00708671  56                        PUSH ESI
00708672  57                        PUSH EDI
00708673  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
00708676  8B F9                     MOV EDI,ECX
00708678  89 7D 80                  MOV dword ptr [EBP + -0x80],EDI
0070867B  33 F6                     XOR ESI,ESI
LAB_0070867d:
0070867D  6A 20                     PUSH 0x20
0070867F  68 28 70 85 00            PUSH 0x857028
00708684  68 04 70 85 00            PUSH 0x857004
00708689  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
0070868C  8B 48 40                  MOV ECX,dword ptr [EAX + 0x40]
0070868F  51                        PUSH ECX
00708690  E8 AB 37 FB FF            CALL 0x006bbe40
00708695  8B D8                     MOV EBX,EAX
00708697  89 5D C8                  MOV dword ptr [EBP + -0x38],EBX
0070869A  85 DB                     TEST EBX,EBX
0070869C  74 17                     JZ 0x007086b5
0070869E  81 FB C2 01 76 88         CMP EBX,0x887601c2
007086A4  75 0F                     JNZ 0x007086b5
007086A6  8B 57 04                  MOV EDX,dword ptr [EDI + 0x4]
007086A9  52                        PUSH EDX
007086AA  E8 91 65 FC FF            CALL 0x006cec40
007086AF  46                        INC ESI
007086B0  83 FE 02                  CMP ESI,0x2
007086B3  7C C8                     JL 0x0070867d
LAB_007086b5:
007086B5  33 C9                     XOR ECX,ECX
007086B7  3B D9                     CMP EBX,ECX
007086B9  0F 85 C2 05 00 00         JNZ 0x00708c81
007086BF  B8 64 00 00 00            MOV EAX,0x64
007086C4  39 87 F0 02 00 00         CMP dword ptr [EDI + 0x2f0],EAX
007086CA  75 15                     JNZ 0x007086e1
007086CC  39 87 F4 02 00 00         CMP dword ptr [EDI + 0x2f4],EAX
007086D2  75 0D                     JNZ 0x007086e1
007086D4  89 0D 30 70 85 00         MOV dword ptr [0x00857030],ECX
007086DA  B8 01 00 00 00            MOV EAX,0x1
007086DF  EB 0A                     JMP 0x007086eb
LAB_007086e1:
007086E1  B8 01 00 00 00            MOV EAX,0x1
007086E6  A3 30 70 85 00            MOV [0x00857030],EAX
LAB_007086eb:
007086EB  A3 08 70 85 00            MOV [0x00857008],EAX
007086F0  A3 C8 6F 85 00            MOV [0x00856fc8],EAX
007086F5  8B 87 F0 02 00 00         MOV EAX,dword ptr [EDI + 0x2f0]
007086FB  83 F8 43                  CMP EAX,0x43
007086FE  75 16                     JNZ 0x00708716
00708700  C7 05 C8 6F 85 00 02 00 00 00  MOV dword ptr [0x00856fc8],0x2
0070870A  C7 05 08 70 85 00 03 00 00 00  MOV dword ptr [0x00857008],0x3
00708714  EB 19                     JMP 0x0070872f
LAB_00708716:
00708716  83 F8 28                  CMP EAX,0x28
00708719  75 14                     JNZ 0x0070872f
0070871B  C7 05 C8 6F 85 00 02 00 00 00  MOV dword ptr [0x00856fc8],0x2
00708725  C7 05 08 70 85 00 05 00 00 00  MOV dword ptr [0x00857008],0x5
LAB_0070872f:
0070872F  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00708732  8B B7 28 03 00 00         MOV ESI,dword ptr [EDI + 0x328]
00708738  8B 8F 20 03 00 00         MOV ECX,dword ptr [EDI + 0x320]
0070873E  8B C6                     MOV EAX,ESI
00708740  2B 87 24 03 00 00         SUB EAX,dword ptr [EDI + 0x324]
00708746  2B C1                     SUB EAX,ECX
00708748  89 45 84                  MOV dword ptr [EBP + -0x7c],EAX
0070874B  2B F1                     SUB ESI,ECX
0070874D  4E                        DEC ESI
0070874E  89 75 A8                  MOV dword ptr [EBP + -0x58],ESI
LAB_00708751:
00708751  3B F0                     CMP ESI,EAX
00708753  7C 6D                     JL 0x007087c2
00708755  8D 04 76                  LEA EAX,[ESI + ESI*0x2]
00708758  8D 0C 86                  LEA ECX,[ESI + EAX*0x4]
0070875B  8B 97 30 03 00 00         MOV EDX,dword ptr [EDI + 0x330]
00708761  8D 04 CA                  LEA EAX,[EDX + ECX*0x8]
00708764  8B 58 64                  MOV EBX,dword ptr [EAX + 0x64]
00708767  89 5D E0                  MOV dword ptr [EBP + -0x20],EBX
0070876A  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
0070876D  89 8D 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],ECX
00708773  F6 C5 80                  TEST CH,0x80
00708776  75 3E                     JNZ 0x007087b6
00708778  F6 00 80                  TEST byte ptr [EAX],0x80
0070877B  74 39                     JZ 0x007087b6
0070877D  8B 83 90 00 00 00         MOV EAX,dword ptr [EBX + 0x90]
00708783  85 C0                     TEST EAX,EAX
00708785  74 2F                     JZ 0x007087b6
00708787  F6 85 7C FF FF FF 02      TEST byte ptr [EBP + 0xffffff7c],0x2
0070878E  6A 01                     PUSH 0x1
00708790  6A FF                     PUSH -0x1
00708792  74 12                     JZ 0x007087a6
00708794  6A 00                     PUSH 0x0
00708796  56                        PUSH ESI
00708797  8B CF                     MOV ECX,EDI
00708799  E8 32 AA FE FF            CALL 0x006f31d0
0070879E  6A 01                     PUSH 0x1
007087A0  6A FF                     PUSH -0x1
007087A2  6A 01                     PUSH 0x1
007087A4  EB 02                     JMP 0x007087a8
LAB_007087a6:
007087A6  6A FF                     PUSH -0x1
LAB_007087a8:
007087A8  56                        PUSH ESI
007087A9  8B CF                     MOV ECX,EDI
007087AB  E8 20 AA FE FF            CALL 0x006f31d0
007087B0  8B 03                     MOV EAX,dword ptr [EBX]
007087B2  24 7F                     AND AL,0x7f
007087B4  89 03                     MOV dword ptr [EBX],EAX
LAB_007087b6:
007087B6  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
007087B9  4E                        DEC ESI
007087BA  89 75 A8                  MOV dword ptr [EBP + -0x58],ESI
007087BD  8B 5D C8                  MOV EBX,dword ptr [EBP + -0x38]
007087C0  EB 8F                     JMP 0x00708751
LAB_007087c2:
007087C2  48                        DEC EAX
007087C3  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
LAB_007087c6:
007087C6  85 C0                     TEST EAX,EAX
007087C8  0F 8C 3C 04 00 00         JL 0x00708c0a
007087CE  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
007087D1  8D 1C 88                  LEA EBX,[EAX + ECX*0x4]
007087D4  C1 E3 03                  SHL EBX,0x3
007087D7  8B 8F 30 03 00 00         MOV ECX,dword ptr [EDI + 0x330]
007087DD  8B 74 19 64               MOV ESI,dword ptr [ECX + EBX*0x1 + 0x64]
007087E1  89 75 E0                  MOV dword ptr [EBP + -0x20],ESI
007087E4  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
007087E7  F6 C4 40                  TEST AH,0x40
007087EA  0F 84 F0 00 00 00         JZ 0x007088e0
007087F0  F6 04 19 02               TEST byte ptr [ECX + EBX*0x1],0x2
007087F4  0F 84 E6 00 00 00         JZ 0x007088e0
007087FA  8D 46 64                  LEA EAX,[ESI + 0x64]
007087FD  8B 10                     MOV EDX,dword ptr [EAX]
007087FF  89 56 3C                  MOV dword ptr [ESI + 0x3c],EDX
00708802  8B 4E 68                  MOV ECX,dword ptr [ESI + 0x68]
00708805  89 4E 40                  MOV dword ptr [ESI + 0x40],ECX
00708808  8B 56 6C                  MOV EDX,dword ptr [ESI + 0x6c]
0070880B  89 56 44                  MOV dword ptr [ESI + 0x44],EDX
0070880E  8B 4E 70                  MOV ECX,dword ptr [ESI + 0x70]
00708811  89 4E 48                  MOV dword ptr [ESI + 0x48],ECX
00708814  8B 97 30 03 00 00         MOV EDX,dword ptr [EDI + 0x330]
0070881A  8D 0C 13                  LEA ECX,[EBX + EDX*0x1]
0070881D  8B 51 18                  MOV EDX,dword ptr [ECX + 0x18]
00708820  83 FA 04                  CMP EDX,0x4
00708823  7F 0C                     JG 0x00708831
00708825  C7 45 88 00 00 00 00      MOV dword ptr [EBP + -0x78],0x0
0070882C  8D 41 20                  LEA EAX,[ECX + 0x20]
0070882F  EB 03                     JMP 0x00708834
LAB_00708831:
00708831  89 55 88                  MOV dword ptr [EBP + -0x78],EDX
LAB_00708834:
00708834  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
00708837  8B 08                     MOV ECX,dword ptr [EAX]
00708839  89 4D B4                  MOV dword ptr [EBP + -0x4c],ECX
0070883C  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
0070883F  89 55 B8                  MOV dword ptr [EBP + -0x48],EDX
00708842  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00708845  03 08                     ADD ECX,dword ptr [EAX]
00708847  89 4D BC                  MOV dword ptr [EBP + -0x44],ECX
0070884A  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
0070884D  03 50 04                  ADD EDX,dword ptr [EAX + 0x4]
00708850  89 55 C0                  MOV dword ptr [EBP + -0x40],EDX
00708853  8B 86 A0 00 00 00         MOV EAX,dword ptr [ESI + 0xa0]
00708859  8B 48 25                  MOV ECX,dword ptr [EAX + 0x25]
0070885C  51                        PUSH ECX
0070885D  8B 50 21                  MOV EDX,dword ptr [EAX + 0x21]
00708860  52                        PUSH EDX
00708861  8B 48 1D                  MOV ECX,dword ptr [EAX + 0x1d]
00708864  51                        PUSH ECX
00708865  8A 50 1C                  MOV DL,byte ptr [EAX + 0x1c]
00708868  52                        PUSH EDX
00708869  8B 48 18                  MOV ECX,dword ptr [EAX + 0x18]
0070886C  51                        PUSH ECX
0070886D  8D 55 B4                  LEA EDX,[EBP + -0x4c]
00708870  52                        PUSH EDX
00708871  8D 48 39                  LEA ECX,[EAX + 0x39]
00708874  51                        PUSH ECX
00708875  83 C0 29                  ADD EAX,0x29
00708878  50                        PUSH EAX
00708879  8B 15 28 70 85 00         MOV EDX,dword ptr [0x00857028]
0070887F  52                        PUSH EDX
00708880  A1 04 70 85 00            MOV EAX,[0x00857004]
00708885  50                        PUSH EAX
00708886  8B CF                     MOV ECX,EDI
00708888  E8 53 0F 02 00            CALL 0x007297e0
0070888D  8B 45 88                  MOV EAX,dword ptr [EBP + -0x78]
00708890  40                        INC EAX
00708891  89 45 88                  MOV dword ptr [EBP + -0x78],EAX
00708894  8B 8F 30 03 00 00         MOV ECX,dword ptr [EDI + 0x330]
0070889A  3B 44 19 18               CMP EAX,dword ptr [ECX + EBX*0x1 + 0x18]
0070889E  7C 31                     JL 0x007088d1
007088A0  8B 4C 19 64               MOV ECX,dword ptr [ECX + EBX*0x1 + 0x64]
LAB_007088a4:
007088A4  8B 11                     MOV EDX,dword ptr [ECX]
007088A6  80 E2 7D                  AND DL,0x7d
007088A9  83 CA 01                  OR EDX,0x1
007088AC  89 16                     MOV dword ptr [ESI],EDX
007088AE  8B 46 70                  MOV EAX,dword ptr [ESI + 0x70]
007088B1  50                        PUSH EAX
007088B2  8B 4E 6C                  MOV ECX,dword ptr [ESI + 0x6c]
007088B5  51                        PUSH ECX
007088B6  8B 56 68                  MOV EDX,dword ptr [ESI + 0x68]
007088B9  03 57 24                  ADD EDX,dword ptr [EDI + 0x24]
007088BC  52                        PUSH EDX
007088BD  8B 46 64                  MOV EAX,dword ptr [ESI + 0x64]
007088C0  03 47 20                  ADD EAX,dword ptr [EDI + 0x20]
007088C3  50                        PUSH EAX
007088C4  8B 0F                     MOV ECX,dword ptr [EDI]
007088C6  51                        PUSH ECX
007088C7  E8 B4 D6 FA FF            CALL 0x006b5f80
007088CC  E9 0B 03 00 00            JMP 0x00708bdc
LAB_007088d1:
007088D1  83 C0 02                  ADD EAX,0x2
007088D4  C1 E0 04                  SHL EAX,0x4
007088D7  03 C1                     ADD EAX,ECX
007088D9  03 C3                     ADD EAX,EBX
007088DB  E9 54 FF FF FF            JMP 0x00708834
LAB_007088e0:
007088E0  F6 C4 20                  TEST AH,0x20
007088E3  0F 84 E8 00 00 00         JZ 0x007089d1
007088E9  F6 04 19 02               TEST byte ptr [ECX + EBX*0x1],0x2
007088ED  0F 84 DE 00 00 00         JZ 0x007089d1
007088F3  8D 46 64                  LEA EAX,[ESI + 0x64]
007088F6  8B 10                     MOV EDX,dword ptr [EAX]
007088F8  89 56 3C                  MOV dword ptr [ESI + 0x3c],EDX
007088FB  8B 4E 68                  MOV ECX,dword ptr [ESI + 0x68]
007088FE  89 4E 40                  MOV dword ptr [ESI + 0x40],ECX
00708901  8B 56 6C                  MOV EDX,dword ptr [ESI + 0x6c]
00708904  89 56 44                  MOV dword ptr [ESI + 0x44],EDX
00708907  8B 4E 70                  MOV ECX,dword ptr [ESI + 0x70]
0070890A  89 4E 48                  MOV dword ptr [ESI + 0x48],ECX
0070890D  8B 97 30 03 00 00         MOV EDX,dword ptr [EDI + 0x330]
00708913  8D 0C 13                  LEA ECX,[EBX + EDX*0x1]
00708916  8B 51 18                  MOV EDX,dword ptr [ECX + 0x18]
00708919  83 FA 04                  CMP EDX,0x4
0070891C  7F 0C                     JG 0x0070892a
0070891E  C7 45 88 00 00 00 00      MOV dword ptr [EBP + -0x78],0x0
00708925  8D 41 20                  LEA EAX,[ECX + 0x20]
00708928  EB 03                     JMP 0x0070892d
LAB_0070892a:
0070892A  89 55 88                  MOV dword ptr [EBP + -0x78],EDX
LAB_0070892d:
0070892D  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
00708930  8B 08                     MOV ECX,dword ptr [EAX]
00708932  89 4D B4                  MOV dword ptr [EBP + -0x4c],ECX
00708935  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
00708938  89 55 B8                  MOV dword ptr [EBP + -0x48],EDX
0070893B  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
0070893E  03 08                     ADD ECX,dword ptr [EAX]
00708940  89 4D BC                  MOV dword ptr [EBP + -0x44],ECX
00708943  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
00708946  03 50 04                  ADD EDX,dword ptr [EAX + 0x4]
00708949  89 55 C0                  MOV dword ptr [EBP + -0x40],EDX
0070894C  8B 86 A0 00 00 00         MOV EAX,dword ptr [ESI + 0xa0]
00708952  6A FF                     PUSH -0x1
00708954  6A 00                     PUSH 0x0
00708956  6A 00                     PUSH 0x0
00708958  8A 48 18                  MOV CL,byte ptr [EAX + 0x18]
0070895B  51                        PUSH ECX
0070895C  8B 50 14                  MOV EDX,dword ptr [EAX + 0x14]
0070895F  52                        PUSH EDX
00708960  8D 4D B4                  LEA ECX,[EBP + -0x4c]
00708963  51                        PUSH ECX
00708964  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
00708967  52                        PUSH EDX
00708968  83 C0 25                  ADD EAX,0x25
0070896B  50                        PUSH EAX
0070896C  A1 28 70 85 00            MOV EAX,[0x00857028]
00708971  50                        PUSH EAX
00708972  8B 0D 04 70 85 00         MOV ECX,dword ptr [0x00857004]
00708978  51                        PUSH ECX
00708979  8B CF                     MOV ECX,EDI
0070897B  E8 A0 22 02 00            CALL 0x0072ac20
00708980  8B 45 88                  MOV EAX,dword ptr [EBP + -0x78]
00708983  40                        INC EAX
00708984  89 45 88                  MOV dword ptr [EBP + -0x78],EAX
00708987  8B 8F 30 03 00 00         MOV ECX,dword ptr [EDI + 0x330]
0070898D  3B 44 19 18               CMP EAX,dword ptr [ECX + EBX*0x1 + 0x18]
00708991  7C 2F                     JL 0x007089c2
00708993  8B 54 19 64               MOV EDX,dword ptr [ECX + EBX*0x1 + 0x64]
00708997  8B 02                     MOV EAX,dword ptr [EDX]
00708999  24 7D                     AND AL,0x7d
0070899B  0C 01                     OR AL,0x1
0070899D  89 06                     MOV dword ptr [ESI],EAX
0070899F  8B 4E 70                  MOV ECX,dword ptr [ESI + 0x70]
007089A2  51                        PUSH ECX
007089A3  8B 56 6C                  MOV EDX,dword ptr [ESI + 0x6c]
007089A6  52                        PUSH EDX
007089A7  8B 46 68                  MOV EAX,dword ptr [ESI + 0x68]
007089AA  03 47 24                  ADD EAX,dword ptr [EDI + 0x24]
007089AD  50                        PUSH EAX
007089AE  8B 4E 64                  MOV ECX,dword ptr [ESI + 0x64]
007089B1  03 4F 20                  ADD ECX,dword ptr [EDI + 0x20]
007089B4  51                        PUSH ECX
007089B5  8B 17                     MOV EDX,dword ptr [EDI]
007089B7  52                        PUSH EDX
007089B8  E8 C3 D5 FA FF            CALL 0x006b5f80
007089BD  E9 1A 02 00 00            JMP 0x00708bdc
LAB_007089c2:
007089C2  83 C0 02                  ADD EAX,0x2
007089C5  C1 E0 04                  SHL EAX,0x4
007089C8  03 C1                     ADD EAX,ECX
007089CA  03 C3                     ADD EAX,EBX
007089CC  E9 5C FF FF FF            JMP 0x0070892d
LAB_007089d1:
007089D1  F6 C4 10                  TEST AH,0x10
007089D4  0F 84 44 01 00 00         JZ 0x00708b1e
007089DA  F6 04 19 02               TEST byte ptr [ECX + EBX*0x1],0x2
007089DE  0F 84 3A 01 00 00         JZ 0x00708b1e
007089E4  8D 46 64                  LEA EAX,[ESI + 0x64]
007089E7  8B 08                     MOV ECX,dword ptr [EAX]
007089E9  89 4E 3C                  MOV dword ptr [ESI + 0x3c],ECX
007089EC  8B 56 68                  MOV EDX,dword ptr [ESI + 0x68]
007089EF  89 56 40                  MOV dword ptr [ESI + 0x40],EDX
007089F2  8B 4E 6C                  MOV ECX,dword ptr [ESI + 0x6c]
007089F5  89 4E 44                  MOV dword ptr [ESI + 0x44],ECX
007089F8  8B 56 70                  MOV EDX,dword ptr [ESI + 0x70]
007089FB  89 56 48                  MOV dword ptr [ESI + 0x48],EDX
007089FE  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
00708A01  89 4D A4                  MOV dword ptr [EBP + -0x5c],ECX
00708A04  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
00708A07  8B 56 4C                  MOV EDX,dword ptr [ESI + 0x4c]
00708A0A  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
00708A0D  8B 46 50                  MOV EAX,dword ptr [ESI + 0x50]
00708A10  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
00708A13  C7 45 D4 06 00 00 00      MOV dword ptr [EBP + -0x2c],0x6
00708A1A  C7 45 D8 07 00 00 00      MOV dword ptr [EBP + -0x28],0x7
00708A21  8B 8E 98 00 00 00         MOV ECX,dword ptr [ESI + 0x98]
00708A27  89 4D 90                  MOV dword ptr [EBP + -0x70],ECX
00708A2A  BB 00 CA 9A 3B            MOV EBX,0x3b9aca00
LAB_00708a2f:
00708A2F  89 5D B0                  MOV dword ptr [EBP + -0x50],EBX
00708A32  83 FB 0A                  CMP EBX,0xa
00708A35  72 1E                     JC 0x00708a55
00708A37  8B C1                     MOV EAX,ECX
00708A39  33 D2                     XOR EDX,EDX
00708A3B  F7 F3                     DIV EBX
00708A3D  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
00708A40  85 C0                     TEST EAX,EAX
00708A42  75 11                     JNZ 0x00708a55
00708A44  B8 CD CC CC CC            MOV EAX,0xcccccccd
00708A49  F7 E3                     MUL EBX
00708A4B  C1 EA 03                  SHR EDX,0x3
00708A4E  8B DA                     MOV EBX,EDX
00708A50  EB DD                     JMP 0x00708a2f
LAB_00708a52:
00708A52  8B 4D 90                  MOV ECX,dword ptr [EBP + -0x70]
LAB_00708a55:
00708A55  8B C1                     MOV EAX,ECX
00708A57  33 D2                     XOR EDX,EDX
00708A59  F7 F3                     DIV EBX
00708A5B  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
00708A5E  8B C1                     MOV EAX,ECX
00708A60  33 D2                     XOR EDX,EDX
00708A62  F7 F3                     DIV EBX
00708A64  89 55 90                  MOV dword ptr [EBP + -0x70],EDX
00708A67  B8 CD CC CC CC            MOV EAX,0xcccccccd
00708A6C  F7 E3                     MUL EBX
00708A6E  C1 EA 03                  SHR EDX,0x3
00708A71  8B DA                     MOV EBX,EDX
00708A73  89 5D B0                  MOV dword ptr [EBP + -0x50],EBX
00708A76  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
00708A79  51                        PUSH ECX
00708A7A  8D 55 CC                  LEA EDX,[EBP + -0x34]
00708A7D  8D 4D 94                  LEA ECX,[EBP + -0x6c]
00708A80  E8 DB 79 FA FF            CALL 0x006b0460
00708A85  85 C0                     TEST EAX,EAX
00708A87  74 71                     JZ 0x00708afa
00708A89  8B 47 28                  MOV EAX,dword ptr [EDI + 0x28]
00708A8C  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
00708A8F  52                        PUSH EDX
00708A90  8B 4D 9C                  MOV ECX,dword ptr [EBP + -0x64]
00708A93  51                        PUSH ECX
00708A94  6A 00                     PUSH 0x0
00708A96  6A 06                     PUSH 0x6
00708A98  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
00708A9B  8D 14 CD 00 00 00 00      LEA EDX,[ECX*0x8 + 0x0]
00708AA2  2B D1                     SUB EDX,ECX
00708AA4  8B CA                     MOV ECX,EDX
00708AA6  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
00708AA9  2B CA                     SUB ECX,EDX
00708AAB  03 4D D0                  ADD ECX,dword ptr [EBP + -0x30]
00708AAE  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
00708AB1  D1 E1                     SHL ECX,0x1
00708AB3  2B 4D 94                  SUB ECX,dword ptr [EBP + -0x6c]
00708AB6  8B 5D CC                  MOV EBX,dword ptr [EBP + -0x34]
00708AB9  8D 8C 19 90 FD 7E 00      LEA ECX,[ECX + EBX*0x1 + 0x7efd90]
00708AC0  51                        PUSH ECX
00708AC1  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
00708AC4  51                        PUSH ECX
00708AC5  8D 0C 00                  LEA ECX,[EAX + EAX*0x1]
00708AC8  51                        PUSH ECX
00708AC9  0F AF C2                  IMUL EAX,EDX
00708ACC  8B 4D 94                  MOV ECX,dword ptr [EBP + -0x6c]
00708ACF  03 C1                     ADD EAX,ECX
00708AD1  8B 5F 14                  MOV EBX,dword ptr [EDI + 0x14]
00708AD4  8D 04 43                  LEA EAX,[EBX + EAX*0x2]
00708AD7  50                        PUSH EAX
00708AD8  A1 28 70 85 00            MOV EAX,[0x00857028]
00708ADD  50                        PUSH EAX
00708ADE  8B 5F 24                  MOV EBX,dword ptr [EDI + 0x24]
00708AE1  03 DA                     ADD EBX,EDX
00708AE3  0F AF D8                  IMUL EBX,EAX
00708AE6  03 5F 20                  ADD EBX,dword ptr [EDI + 0x20]
00708AE9  03 D9                     ADD EBX,ECX
00708AEB  03 1D 04 70 85 00         ADD EBX,dword ptr [0x00857004]
00708AF1  53                        PUSH EBX
00708AF2  E8 A9 01 00 00            CALL 0x00708ca0
00708AF7  8B 5D B0                  MOV EBX,dword ptr [EBP + -0x50]
LAB_00708afa:
00708AFA  83 45 CC 06               ADD dword ptr [EBP + -0x34],0x6
00708AFE  85 DB                     TEST EBX,EBX
00708B00  0F 85 4C FF FF FF         JNZ 0x00708a52
00708B06  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
00708B09  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
00708B0C  8D 14 88                  LEA EDX,[EAX + ECX*0x4]
00708B0F  8B 87 30 03 00 00         MOV EAX,dword ptr [EDI + 0x330]
00708B15  8B 4C D0 64               MOV ECX,dword ptr [EAX + EDX*0x8 + 0x64]
00708B19  E9 86 FD FF FF            JMP 0x007088a4
LAB_00708b1e:
00708B1E  F7 04 19 02 08 00 00      TEST dword ptr [ECX + EBX*0x1],0x802
00708B25  0F 84 B1 00 00 00         JZ 0x00708bdc
00708B2B  8B 54 19 04               MOV EDX,dword ptr [ECX + EBX*0x1 + 0x4]
00708B2F  89 95 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],EDX
00708B35  F6 C6 80                  TEST DH,0x80
00708B38  0F 85 9E 00 00 00         JNZ 0x00708bdc
00708B3E  B8 01 00 00 00            MOV EAX,0x1
00708B43  89 45 8C                  MOV dword ptr [EBP + -0x74],EAX
00708B46  F6 C2 40                  TEST DL,0x40
00708B49  74 31                     JZ 0x00708b7c
00708B4B  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
00708B4E  8D 04 52                  LEA EAX,[EDX + EDX*0x2]
00708B51  C1 E0 03                  SHL EAX,0x3
00708B54  2B C2                     SUB EAX,EDX
00708B56  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
00708B59  8B 87 1C 03 00 00         MOV EAX,dword ptr [EDI + 0x31c]
00708B5F  8B 44 90 0C               MOV EAX,dword ptr [EAX + EDX*0x4 + 0xc]
00708B63  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
00708B66  8D 04 90                  LEA EAX,[EAX + EDX*0x4]
00708B69  8B 04 C1                  MOV EAX,dword ptr [ECX + EAX*0x8]
00708B6C  F7 D0                     NOT EAX
00708B6E  D1 E8                     SHR EAX,0x1
00708B70  83 E0 01                  AND EAX,0x1
00708B73  89 45 8C                  MOV dword ptr [EBP + -0x74],EAX
00708B76  8B 95 7C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff7c]
LAB_00708b7c:
00708B7C  85 C0                     TEST EAX,EAX
00708B7E  74 5C                     JZ 0x00708bdc
00708B80  F6 C2 02                  TEST DL,0x2
00708B83  6A 00                     PUSH 0x0
00708B85  6A FF                     PUSH -0x1
00708B87  74 34                     JZ 0x00708bbd
00708B89  6A 00                     PUSH 0x0
00708B8B  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
00708B8E  51                        PUSH ECX
00708B8F  8B CF                     MOV ECX,EDI
00708B91  E8 3A A6 FE FF            CALL 0x006f31d0
00708B96  6A 00                     PUSH 0x0
00708B98  6A FF                     PUSH -0x1
00708B9A  6A 01                     PUSH 0x1
00708B9C  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
00708B9F  52                        PUSH EDX
00708BA0  8B CF                     MOV ECX,EDI
00708BA2  E8 29 A6 FE FF            CALL 0x006f31d0
00708BA7  8B 87 30 03 00 00         MOV EAX,dword ptr [EDI + 0x330]
00708BAD  8B 4C 03 64               MOV ECX,dword ptr [EBX + EAX*0x1 + 0x64]
00708BB1  8B 11                     MOV EDX,dword ptr [ECX]
00708BB3  80 E2 7D                  AND DL,0x7d
00708BB6  83 CA 01                  OR EDX,0x1
00708BB9  89 16                     MOV dword ptr [ESI],EDX
00708BBB  EB 1F                     JMP 0x00708bdc
LAB_00708bbd:
00708BBD  6A FF                     PUSH -0x1
00708BBF  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
00708BC2  50                        PUSH EAX
00708BC3  8B CF                     MOV ECX,EDI
00708BC5  E8 06 A6 FE FF            CALL 0x006f31d0
00708BCA  8B 8F 30 03 00 00         MOV ECX,dword ptr [EDI + 0x330]
00708BD0  8B 54 0B 64               MOV EDX,dword ptr [EBX + ECX*0x1 + 0x64]
00708BD4  8B 02                     MOV EAX,dword ptr [EDX]
00708BD6  24 7D                     AND AL,0x7d
00708BD8  0C 01                     OR AL,0x1
00708BDA  89 06                     MOV dword ptr [ESI],EAX
LAB_00708bdc:
00708BDC  8B 86 94 00 00 00         MOV EAX,dword ptr [ESI + 0x94]
LAB_00708be2:
00708BE2  48                        DEC EAX
00708BE3  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
00708BE6  85 C0                     TEST EAX,EAX
00708BE8  7C 11                     JL 0x00708bfb
00708BEA  8B 8E A4 00 00 00         MOV ECX,dword ptr [ESI + 0xa4]
00708BF0  8D 4C 81 02               LEA ECX,[ECX + EAX*0x4 + 0x2]
00708BF4  66 81 21 7F FF            AND word ptr [ECX],0xff7f
00708BF9  EB E7                     JMP 0x00708be2
LAB_00708bfb:
00708BFB  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
00708BFE  48                        DEC EAX
00708BFF  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
00708C02  8B 5D C8                  MOV EBX,dword ptr [EBP + -0x38]
00708C05  E9 BC FB FF FF            JMP 0x007087c6
LAB_00708c0a:
00708C0A  8B B7 28 03 00 00         MOV ESI,dword ptr [EDI + 0x328]
LAB_00708c10:
00708C10  4E                        DEC ESI
00708C11  89 75 A8                  MOV dword ptr [EBP + -0x58],ESI
00708C14  85 F6                     TEST ESI,ESI
00708C16  7C 32                     JL 0x00708c4a
00708C18  8D 14 76                  LEA EDX,[ESI + ESI*0x2]
00708C1B  8D 04 96                  LEA EAX,[ESI + EDX*0x4]
00708C1E  8B 8F 30 03 00 00         MOV ECX,dword ptr [EDI + 0x330]
00708C24  8B 54 C1 64               MOV EDX,dword ptr [ECX + EAX*0x8 + 0x64]
00708C28  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
00708C2B  8B 82 94 00 00 00         MOV EAX,dword ptr [EDX + 0x94]
LAB_00708c31:
00708C31  48                        DEC EAX
00708C32  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
00708C35  85 C0                     TEST EAX,EAX
00708C37  7C D7                     JL 0x00708c10
00708C39  8B 8A A4 00 00 00         MOV ECX,dword ptr [EDX + 0xa4]
00708C3F  8D 4C 81 02               LEA ECX,[ECX + EAX*0x4 + 0x2]
00708C43  66 81 21 7F FF            AND word ptr [ECX],0xff7f
00708C48  EB E7                     JMP 0x00708c31
LAB_00708c4a:
00708C4A  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
00708C51  EB 1D                     JMP 0x00708c70
LAB_00708c70:
00708C70  8B 57 04                  MOV EDX,dword ptr [EDI + 0x4]
00708C73  8B 42 40                  MOV EAX,dword ptr [EDX + 0x40]
00708C76  8B 08                     MOV ECX,dword ptr [EAX]
00708C78  6A 00                     PUSH 0x0
00708C7A  50                        PUSH EAX
00708C7B  FF 91 80 00 00 00         CALL dword ptr [ECX + 0x80]
LAB_00708c81:
00708C81  8B C3                     MOV EAX,EBX
00708C83  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00708C86  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
00708C8D  5F                        POP EDI
00708C8E  5E                        POP ESI
00708C8F  5B                        POP EBX
00708C90  8B E5                     MOV ESP,EBP
00708C92  5D                        POP EBP
00708C93  C3                        RET
