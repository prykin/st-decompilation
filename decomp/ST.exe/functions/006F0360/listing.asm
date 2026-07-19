mfTMapOptimize:
006F0360  55                        PUSH EBP
006F0361  8B EC                     MOV EBP,ESP
006F0363  83 EC 5C                  SUB ESP,0x5c
006F0366  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006F036B  53                        PUSH EBX
006F036C  56                        PUSH ESI
006F036D  33 DB                     XOR EBX,EBX
006F036F  57                        PUSH EDI
006F0370  8D 55 A8                  LEA EDX,[EBP + -0x58]
006F0373  8D 4D A4                  LEA ECX,[EBP + -0x5c]
006F0376  53                        PUSH EBX
006F0377  52                        PUSH EDX
006F0378  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006F037B  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
006F037E  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
006F0381  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
006F0384  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006F038A  E8 61 D4 03 00            CALL 0x0072d7f0
006F038F  8B F0                     MOV ESI,EAX
006F0391  83 C4 08                  ADD ESP,0x8
006F0394  3B F3                     CMP ESI,EBX
006F0396  0F 85 17 02 00 00         JNZ 0x006f05b3
006F039C  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006F039F  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006F03A2  3B FB                     CMP EDI,EBX
006F03A4  74 0E                     JZ 0x006f03b4
006F03A6  56                        PUSH ESI
006F03A7  E8 64 F0 FF FF            CALL 0x006ef410
006F03AC  F7 D8                     NEG EAX
006F03AE  50                        PUSH EAX
006F03AF  FF D7                     CALL EDI
006F03B1  83 C4 08                  ADD ESP,0x8
LAB_006f03b4:
006F03B4  56                        PUSH ESI
006F03B5  E8 66 02 00 00            CALL 0x006f0620
006F03BA  83 C4 04                  ADD ESP,0x4
006F03BD  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006F03C0  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
LAB_006f03c3:
006F03C3  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
006F03C6  33 FF                     XOR EDI,EDI
006F03C8  85 C9                     TEST ECX,ECX
006F03CA  0F 8E B7 01 00 00         JLE 0x006f0587
LAB_006f03d0:
006F03D0  8B 08                     MOV ECX,dword ptr [EAX]
006F03D2  33 F6                     XOR ESI,ESI
006F03D4  85 C9                     TEST ECX,ECX
006F03D6  0F 8E 9F 01 00 00         JLE 0x006f057b
LAB_006f03dc:
006F03DC  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
006F03DF  0F AF D3                  IMUL EDX,EBX
006F03E2  03 D7                     ADD EDX,EDI
006F03E4  0F AF D1                  IMUL EDX,ECX
006F03E7  8D 4C 32 02               LEA ECX,[EDX + ESI*0x1 + 0x2]
006F03EB  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
006F03EE  66 8B 0C 48               MOV CX,word ptr [EAX + ECX*0x2]
006F03F2  66 85 C9                  TEST CX,CX
006F03F5  0F 84 75 01 00 00         JZ 0x006f0570
006F03FB  F6 C5 0F                  TEST CH,0xf
006F03FE  0F 84 6C 01 00 00         JZ 0x006f0570
006F0404  8D 4B 01                  LEA ECX,[EBX + 0x1]
006F0407  83 F9 06                  CMP ECX,0x6
006F040A  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006F040D  0F 8D 46 01 00 00         JGE 0x006f0559
006F0413  C1 E1 02                  SHL ECX,0x2
006F0416  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
LAB_006f0419:
006F0419  8D 14 9D 00 00 00 00      LEA EDX,[EBX*0x4 + 0x0]
006F0420  2B CA                     SUB ECX,EDX
006F0422  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
006F0425  0F AF D3                  IMUL EDX,EBX
006F0428  03 D7                     ADD EDX,EDI
006F042A  BB 00 02 00 00            MOV EBX,0x200
006F042F  0F AF 10                  IMUL EDX,dword ptr [EAX]
006F0432  8D 54 32 02               LEA EDX,[EDX + ESI*0x1 + 0x2]
006F0436  8D 14 52                  LEA EDX,[EDX + EDX*0x2]
006F0439  66 8B 14 50               MOV DX,word ptr [EAX + EDX*0x2]
006F043D  81 E2 00 0F 00 00         AND EDX,0xf00
006F0443  3B DA                     CMP EBX,EDX
006F0445  8B 99 6C EF 7E 00         MOV EBX,dword ptr [ECX + 0x7eef6c]
006F044B  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006F044E  1B D2                     SBB EDX,EDX
006F0450  F7 DA                     NEG EDX
006F0452  03 D3                     ADD EDX,EBX
006F0454  52                        PUSH EDX
006F0455  51                        PUSH ECX
006F0456  57                        PUSH EDI
006F0457  56                        PUSH ESI
006F0458  50                        PUSH EAX
006F0459  E8 72 FE FF FF            CALL 0x006f02d0
006F045E  83 C4 14                  ADD ESP,0x14
006F0461  85 C0                     TEST EAX,EAX
006F0463  75 20                     JNZ 0x006f0485
006F0465  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006F0468  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006F046B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F046E  43                        INC EBX
006F046F  83 C1 04                  ADD ECX,0x4
006F0472  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
006F0475  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006F0478  83 F9 18                  CMP ECX,0x18
006F047B  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
006F047E  7C 99                     JL 0x006f0419
006F0480  E9 D4 00 00 00            JMP 0x006f0559
LAB_006f0485:
006F0485  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F0488  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006F048B  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
006F0492  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
006F0495  8B 10                     MOV EDX,dword ptr [EAX]
006F0497  0F AF CB                  IMUL ECX,EBX
006F049A  03 CF                     ADD ECX,EDI
006F049C  0F AF CA                  IMUL ECX,EDX
006F049F  8D 4C 31 02               LEA ECX,[ECX + ESI*0x1 + 0x2]
006F04A3  8D 14 49                  LEA EDX,[ECX + ECX*0x2]
006F04A6  66 8B 0C 50               MOV CX,word ptr [EAX + EDX*0x2]
006F04AA  81 E1 00 0F 00 00         AND ECX,0xf00
006F04B0  66 85 C9                  TEST CX,CX
006F04B3  0F 86 82 00 00 00         JBE 0x006f053b
006F04B9  8B CB                     MOV ECX,EBX
LAB_006f04bb:
006F04BB  85 C9                     TEST ECX,ECX
006F04BD  7C 4E                     JL 0x006f050d
006F04BF  8B D1                     MOV EDX,ECX
006F04C1  33 DB                     XOR EBX,EBX
006F04C3  0F AF 50 04               IMUL EDX,dword ptr [EAX + 0x4]
006F04C7  03 D7                     ADD EDX,EDI
006F04C9  0F AF 10                  IMUL EDX,dword ptr [EAX]
006F04CC  8D 54 32 02               LEA EDX,[EDX + ESI*0x1 + 0x2]
006F04D0  8D 14 52                  LEA EDX,[EDX + EDX*0x2]
006F04D3  66 89 1C 50               MOV word ptr [EAX + EDX*0x2],BX
006F04D7  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006F04DA  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
006F04DD  0F AF C1                  IMUL EAX,ECX
006F04E0  03 C7                     ADD EAX,EDI
006F04E2  0F AF 02                  IMUL EAX,dword ptr [EDX]
006F04E5  03 C6                     ADD EAX,ESI
006F04E7  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006F04EA  66 89 5C 42 0A            MOV word ptr [EDX + EAX*0x2 + 0xa],BX
006F04EF  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006F04F2  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
006F04F5  0F AF C1                  IMUL EAX,ECX
006F04F8  03 C7                     ADD EAX,EDI
006F04FA  0F AF 02                  IMUL EAX,dword ptr [EDX]
006F04FD  03 C6                     ADD EAX,ESI
006F04FF  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006F0502  66 89 5C 42 08            MOV word ptr [EDX + EAX*0x2 + 0x8],BX
006F0507  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F050A  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
LAB_006f050d:
006F050D  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006F0510  42                        INC EDX
006F0511  49                        DEC ECX
006F0512  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
006F0515  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
006F0518  0F AF D3                  IMUL EDX,EBX
006F051B  03 D7                     ADD EDX,EDI
006F051D  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006F0520  0F AF 10                  IMUL EDX,dword ptr [EAX]
006F0523  8D 54 32 02               LEA EDX,[EDX + ESI*0x1 + 0x2]
006F0527  8D 14 52                  LEA EDX,[EDX + EDX*0x2]
006F052A  66 8B 14 50               MOV DX,word ptr [EAX + EDX*0x2]
006F052E  C1 EA 08                  SHR EDX,0x8
006F0531  83 E2 0F                  AND EDX,0xf
006F0534  3B DA                     CMP EBX,EDX
006F0536  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006F0539  7C 80                     JL 0x006f04bb
LAB_006f053b:
006F053B  53                        PUSH EBX
006F053C  6A 01                     PUSH 0x1
006F053E  6A 01                     PUSH 0x1
006F0540  57                        PUSH EDI
006F0541  56                        PUSH ESI
006F0542  50                        PUSH EAX
006F0543  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006F0546  50                        PUSH EAX
006F0547  E8 04 05 00 00            CALL 0x006f0a50
006F054C  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006F054F  83 C4 1C                  ADD ESP,0x1c
006F0552  40                        INC EAX
006F0553  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006F0556  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_006f0559:
006F0559  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006F055C  85 C9                     TEST ECX,ECX
006F055E  74 10                     JZ 0x006f0570
006F0560  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006F0563  40                        INC EAX
006F0564  50                        PUSH EAX
006F0565  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006F0568  FF D1                     CALL ECX
006F056A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F056D  83 C4 04                  ADD ESP,0x4
LAB_006f0570:
006F0570  8B 08                     MOV ECX,dword ptr [EAX]
006F0572  46                        INC ESI
006F0573  3B F1                     CMP ESI,ECX
006F0575  0F 8C 61 FE FF FF         JL 0x006f03dc
LAB_006f057b:
006F057B  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
006F057E  47                        INC EDI
006F057F  3B F9                     CMP EDI,ECX
006F0581  0F 8C 49 FE FF FF         JL 0x006f03d0
LAB_006f0587:
006F0587  43                        INC EBX
006F0588  83 FB 05                  CMP EBX,0x5
006F058B  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006F058E  0F 8C 2F FE FF FF         JL 0x006f03c3
006F0594  8D 4D FC                  LEA ECX,[EBP + -0x4]
006F0597  51                        PUSH ECX
006F0598  E8 43 02 00 00            CALL 0x006f07e0
006F059D  8B 55 A4                  MOV EDX,dword ptr [EBP + -0x5c]
006F05A0  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006F05A3  83 C4 04                  ADD ESP,0x4
006F05A6  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006F05AC  5F                        POP EDI
006F05AD  5E                        POP ESI
006F05AE  5B                        POP EBX
006F05AF  8B E5                     MOV ESP,EBP
006F05B1  5D                        POP EBP
006F05B2  C3                        RET
LAB_006f05b3:
006F05B3  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
006F05B6  68 44 F0 7E 00            PUSH 0x7ef044
006F05BB  68 CC 4C 7A 00            PUSH 0x7a4ccc
006F05C0  56                        PUSH ESI
006F05C1  53                        PUSH EBX
006F05C2  68 F2 01 00 00            PUSH 0x1f2
006F05C7  68 88 EF 7E 00            PUSH 0x7eef88
006F05CC  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006F05D1  E8 FA CE FB FF            CALL 0x006ad4d0
006F05D6  83 C4 18                  ADD ESP,0x18
006F05D9  85 C0                     TEST EAX,EAX
006F05DB  74 01                     JZ 0x006f05de
006F05DD  CC                        INT3
LAB_006f05de:
006F05DE  8D 4D FC                  LEA ECX,[EBP + -0x4]
006F05E1  51                        PUSH ECX
006F05E2  E8 F9 01 00 00            CALL 0x006f07e0
006F05E7  83 C4 04                  ADD ESP,0x4
006F05EA  68 F4 01 00 00            PUSH 0x1f4
006F05EF  68 88 EF 7E 00            PUSH 0x7eef88
006F05F4  53                        PUSH EBX
006F05F5  56                        PUSH ESI
006F05F6  E8 45 58 FB FF            CALL 0x006a5e40
006F05FB  3B F3                     CMP ESI,EBX
006F05FD  7D 09                     JGE 0x006f0608
006F05FF  8B C6                     MOV EAX,ESI
006F0601  5F                        POP EDI
006F0602  5E                        POP ESI
006F0603  5B                        POP EBX
006F0604  8B E5                     MOV ESP,EBP
006F0606  5D                        POP EBP
006F0607  C3                        RET
LAB_006f0608:
006F0608  5F                        POP EDI
006F0609  5E                        POP ESI
006F060A  83 C8 FF                  OR EAX,0xffffffff
006F060D  5B                        POP EBX
006F060E  8B E5                     MOV ESP,EBP
006F0610  5D                        POP EBP
006F0611  C3                        RET
