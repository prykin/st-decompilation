FUN_0060d390:
0060D390  55                        PUSH EBP
0060D391  8B EC                     MOV EBP,ESP
0060D393  6A FF                     PUSH -0x1
0060D395  68 78 CD 79 00            PUSH 0x79cd78
0060D39A  68 64 D9 72 00            PUSH 0x72d964
0060D39F  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
0060D3A5  50                        PUSH EAX
0060D3A6  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
0060D3AD  83 EC 48                  SUB ESP,0x48
0060D3B0  53                        PUSH EBX
0060D3B1  56                        PUSH ESI
0060D3B2  57                        PUSH EDI
0060D3B3  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0060D3B6  8B D9                     MOV EBX,ECX
0060D3B8  33 C0                     XOR EAX,EAX
0060D3BA  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
0060D3BD  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
0060D3C0  39 83 40 02 00 00         CMP dword ptr [EBX + 0x240],EAX
0060D3C6  0F 85 AB 01 00 00         JNZ 0x0060d577
0060D3CC  39 83 44 02 00 00         CMP dword ptr [EBX + 0x244],EAX
0060D3D2  0F 84 9F 01 00 00         JZ 0x0060d577
0060D3D8  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0060D3DB  8B BB 3C 02 00 00         MOV EDI,dword ptr [EBX + 0x23c]
0060D3E1  8D 04 BD 00 00 00 00      LEA EAX,[EDI*0x4 + 0x0]
0060D3E8  83 C0 03                  ADD EAX,0x3
0060D3EB  24 FC                     AND AL,0xfc
0060D3ED  E8 4E 06 12 00            CALL 0x0072da40
0060D3F2  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0060D3F5  8B C4                     MOV EAX,ESP
0060D3F7  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
0060D3FA  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
0060D401  8B F7                     MOV ESI,EDI
0060D403  C1 E6 04                  SHL ESI,0x4
0060D406  03 F7                     ADD ESI,EDI
0060D408  C1 E6 02                  SHL ESI,0x2
0060D40B  89 75 D4                  MOV dword ptr [EBP + -0x2c],ESI
0060D40E  E8 00 60 DF FF            CALL 0x00403413
0060D413  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0060D416  33 FF                     XOR EDI,EDI
0060D418  8B 83 3C 02 00 00         MOV EAX,dword ptr [EBX + 0x23c]
0060D41E  85 C0                     TEST EAX,EAX
0060D420  7E 69                     JLE 0x0060d48b
0060D422  33 D2                     XOR EDX,EDX
0060D424  8B CC                     MOV ECX,ESP
LAB_0060d426:
0060D426  C7 01 00 00 00 00         MOV dword ptr [ECX],0x0
0060D42C  8B 83 44 02 00 00         MOV EAX,dword ptr [EBX + 0x244]
0060D432  83 7C 02 40 00            CMP dword ptr [EDX + EAX*0x1 + 0x40],0x0
0060D437  74 0A                     JZ 0x0060d443
0060D439  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0060D43C  03 F0                     ADD ESI,EAX
0060D43E  89 75 D4                  MOV dword ptr [EBP + -0x2c],ESI
0060D441  89 01                     MOV dword ptr [ECX],EAX
LAB_0060d443:
0060D443  8B 83 44 02 00 00         MOV EAX,dword ptr [EBX + 0x244]
0060D449  03 C2                     ADD EAX,EDX
0060D44B  83 78 08 00               CMP dword ptr [EAX + 0x8],0x0
0060D44F  74 1A                     JZ 0x0060d46b
0060D451  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
0060D454  C1 E0 02                  SHL EAX,0x2
0060D457  01 01                     ADD dword ptr [ECX],EAX
0060D459  8B 83 44 02 00 00         MOV EAX,dword ptr [EBX + 0x244]
0060D45F  8B 44 02 04               MOV EAX,dword ptr [EDX + EAX*0x1 + 0x4]
0060D463  8D 04 86                  LEA EAX,[ESI + EAX*0x4]
0060D466  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
0060D469  8B F0                     MOV ESI,EAX
LAB_0060d46b:
0060D46B  8B 01                     MOV EAX,dword ptr [ECX]
0060D46D  85 C0                     TEST EAX,EAX
0060D46F  74 0B                     JZ 0x0060d47c
0060D471  83 C0 04                  ADD EAX,0x4
0060D474  89 01                     MOV dword ptr [ECX],EAX
0060D476  83 C6 04                  ADD ESI,0x4
0060D479  89 75 D4                  MOV dword ptr [EBP + -0x2c],ESI
LAB_0060d47c:
0060D47C  47                        INC EDI
0060D47D  83 C2 44                  ADD EDX,0x44
0060D480  83 C1 04                  ADD ECX,0x4
0060D483  3B BB 3C 02 00 00         CMP EDI,dword ptr [EBX + 0x23c]
0060D489  7C 9B                     JL 0x0060d426
LAB_0060d48b:
0060D48B  85 F6                     TEST ESI,ESI
0060D48D  0F 84 E4 00 00 00         JZ 0x0060d577
0060D493  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
0060D496  51                        PUSH ECX
0060D497  E8 D4 D7 09 00            CALL 0x006aac70
0060D49C  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
0060D49F  85 C0                     TEST EAX,EAX
0060D4A1  0F 84 D0 00 00 00         JZ 0x0060d577
0060D4A7  8B 83 3C 02 00 00         MOV EAX,dword ptr [EBX + 0x23c]
0060D4AD  8B C8                     MOV ECX,EAX
0060D4AF  C1 E1 04                  SHL ECX,0x4
0060D4B2  03 C8                     ADD ECX,EAX
0060D4B4  C1 E1 02                  SHL ECX,0x2
0060D4B7  8B B3 44 02 00 00         MOV ESI,dword ptr [EBX + 0x244]
0060D4BD  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
0060D4C0  8B FA                     MOV EDI,EDX
0060D4C2  8B C1                     MOV EAX,ECX
0060D4C4  C1 E9 02                  SHR ECX,0x2
0060D4C7  F3 A5                     MOVSD.REP ES:EDI,ESI
0060D4C9  8B C8                     MOV ECX,EAX
0060D4CB  83 E1 03                  AND ECX,0x3
0060D4CE  F3 A4                     MOVSB.REP ES:EDI,ESI
0060D4D0  8B 83 3C 02 00 00         MOV EAX,dword ptr [EBX + 0x23c]
0060D4D6  8B C8                     MOV ECX,EAX
0060D4D8  C1 E1 04                  SHL ECX,0x4
0060D4DB  03 C8                     ADD ECX,EAX
0060D4DD  8D 0C 8A                  LEA ECX,[EDX + ECX*0x4]
0060D4E0  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
0060D4E3  33 D2                     XOR EDX,EDX
0060D4E5  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
0060D4E8  3B C2                     CMP EAX,EDX
0060D4EA  0F 8E 87 00 00 00         JLE 0x0060d577
0060D4F0  89 55 AC                  MOV dword ptr [EBP + -0x54],EDX
0060D4F3  8B 75 D8                  MOV ESI,dword ptr [EBP + -0x28]
0060D4F6  89 75 A8                  MOV dword ptr [EBP + -0x58],ESI
LAB_0060d4f9:
0060D4F9  8B 06                     MOV EAX,dword ptr [ESI]
0060D4FB  85 C0                     TEST EAX,EAX
0060D4FD  74 5D                     JZ 0x0060d55c
0060D4FF  89 01                     MOV dword ptr [ECX],EAX
0060D501  8D 41 04                  LEA EAX,[ECX + 0x4]
0060D504  8B B3 44 02 00 00         MOV ESI,dword ptr [EBX + 0x244]
0060D50A  8B 74 32 40               MOV ESI,dword ptr [EDX + ESI*0x1 + 0x40]
0060D50E  85 F6                     TEST ESI,ESI
0060D510  74 42                     JZ 0x0060d554
0060D512  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
0060D515  8B F8                     MOV EDI,EAX
0060D517  8B D1                     MOV EDX,ECX
0060D519  C1 E9 02                  SHR ECX,0x2
0060D51C  F3 A5                     MOVSD.REP ES:EDI,ESI
0060D51E  8B CA                     MOV ECX,EDX
0060D520  83 E1 03                  AND ECX,0x3
0060D523  F3 A4                     MOVSB.REP ES:EDI,ESI
0060D525  8B CA                     MOV ECX,EDX
0060D527  03 C1                     ADD EAX,ECX
0060D529  8B 8B 44 02 00 00         MOV ECX,dword ptr [EBX + 0x244]
0060D52F  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
0060D532  03 CA                     ADD ECX,EDX
0060D534  8B 71 08                  MOV ESI,dword ptr [ECX + 0x8]
0060D537  85 F6                     TEST ESI,ESI
0060D539  74 16                     JZ 0x0060d551
0060D53B  8B 49 04                  MOV ECX,dword ptr [ECX + 0x4]
0060D53E  C1 E1 02                  SHL ECX,0x2
0060D541  8B F8                     MOV EDI,EAX
0060D543  8B C1                     MOV EAX,ECX
0060D545  C1 E9 02                  SHR ECX,0x2
0060D548  F3 A5                     MOVSD.REP ES:EDI,ESI
0060D54A  8B C8                     MOV ECX,EAX
0060D54C  83 E1 03                  AND ECX,0x3
0060D54F  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_0060d551:
0060D551  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
LAB_0060d554:
0060D554  8B 75 A8                  MOV ESI,dword ptr [EBP + -0x58]
0060D557  03 0E                     ADD ECX,dword ptr [ESI]
0060D559  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
LAB_0060d55c:
0060D55C  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
0060D55F  40                        INC EAX
0060D560  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
0060D563  83 C2 44                  ADD EDX,0x44
0060D566  89 55 AC                  MOV dword ptr [EBP + -0x54],EDX
0060D569  83 C6 04                  ADD ESI,0x4
0060D56C  89 75 A8                  MOV dword ptr [EBP + -0x58],ESI
0060D56F  3B 83 3C 02 00 00         CMP EAX,dword ptr [EBX + 0x23c]
0060D575  7C 82                     JL 0x0060d4f9
LAB_0060d577:
0060D577  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
0060D57A  8B D0                     MOV EDX,EAX
0060D57C  F7 DA                     NEG EDX
0060D57E  1B D2                     SBB EDX,EDX
0060D580  23 55 D4                  AND EDX,dword ptr [EBP + -0x2c]
0060D583  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0060D586  89 11                     MOV dword ptr [ECX],EDX
0060D588  8D 65 9C                  LEA ESP,[EBP + -0x64]
0060D58B  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0060D58E  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
0060D595  5F                        POP EDI
0060D596  5E                        POP ESI
0060D597  5B                        POP EBX
0060D598  8B E5                     MOV ESP,EBP
0060D59A  5D                        POP EBP
0060D59B  C2 04 00                  RET 0x4
