AiPlrClassTy::sub_00678FC0:
00678FC0  55                        PUSH EBP
00678FC1  8B EC                     MOV EBP,ESP
00678FC3  83 EC 08                  SUB ESP,0x8
00678FC6  8B 91 95 06 00 00         MOV EDX,dword ptr [ECX + 0x695]
00678FCC  53                        PUSH EBX
00678FCD  56                        PUSH ESI
00678FCE  57                        PUSH EDI
00678FCF  8B 72 0C                  MOV ESI,dword ptr [EDX + 0xc]
00678FD2  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00678FD5  83 FE 01                  CMP ESI,0x1
00678FD8  0F 8E E8 00 00 00         JLE 0x006790c6
LAB_00678fde:
00678FDE  8D 46 FF                  LEA EAX,[ESI + -0x1]
00678FE1  33 FF                     XOR EDI,EDI
00678FE3  85 C0                     TEST EAX,EAX
00678FE5  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00678FE8  0F 8E D8 00 00 00         JLE 0x006790c6
LAB_00678fee:
00678FEE  3B FE                     CMP EDI,ESI
00678FF0  73 0D                     JNC 0x00678fff
00678FF2  8B 4A 08                  MOV ECX,dword ptr [EDX + 0x8]
00678FF5  8B 42 1C                  MOV EAX,dword ptr [EDX + 0x1c]
00678FF8  0F AF CF                  IMUL ECX,EDI
00678FFB  03 C8                     ADD ECX,EAX
00678FFD  EB 02                     JMP 0x00679001
LAB_00678fff:
00678FFF  33 C9                     XOR ECX,ECX
LAB_00679001:
00679001  8D 5F 01                  LEA EBX,[EDI + 0x1]
00679004  3B DE                     CMP EBX,ESI
00679006  73 0B                     JNC 0x00679013
00679008  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
0067900B  0F AF C3                  IMUL EAX,EBX
0067900E  03 42 1C                  ADD EAX,dword ptr [EDX + 0x1c]
00679011  EB 02                     JMP 0x00679015
LAB_00679013:
00679013  33 C0                     XOR EAX,EAX
LAB_00679015:
00679015  83 39 00                  CMP dword ptr [ECX],0x0
00679018  0F 84 84 00 00 00         JZ 0x006790a2
0067901E  83 38 00                  CMP dword ptr [EAX],0x0
00679021  74 7F                     JZ 0x006790a2
00679023  85 D2                     TEST EDX,EDX
00679025  74 2F                     JZ 0x00679056
00679027  85 DB                     TEST EBX,EBX
00679029  7C 2B                     JL 0x00679056
0067902B  3B DE                     CMP EBX,ESI
0067902D  7D 27                     JGE 0x00679056
0067902F  73 0D                     JNC 0x0067903e
00679031  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
00679034  8B 4A 1C                  MOV ECX,dword ptr [EDX + 0x1c]
00679037  0F AF C3                  IMUL EAX,EBX
0067903A  03 C1                     ADD EAX,ECX
0067903C  EB 02                     JMP 0x00679040
LAB_0067903e:
0067903E  33 C0                     XOR EAX,EAX
LAB_00679040:
00679040  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
00679043  85 C9                     TEST ECX,ECX
00679045  74 0B                     JZ 0x00679052
00679047  8B 00                     MOV EAX,dword ptr [EAX]
00679049  85 C0                     TEST EAX,EAX
0067904B  74 09                     JZ 0x00679056
0067904D  8D 48 20                  LEA ECX,[EAX + 0x20]
00679050  EB 06                     JMP 0x00679058
LAB_00679052:
00679052  8B 08                     MOV ECX,dword ptr [EAX]
00679054  EB 02                     JMP 0x00679058
LAB_00679056:
00679056  33 C9                     XOR ECX,ECX
LAB_00679058:
00679058  85 D2                     TEST EDX,EDX
0067905A  74 2B                     JZ 0x00679087
0067905C  85 FF                     TEST EDI,EDI
0067905E  7C 27                     JL 0x00679087
00679060  3B FE                     CMP EDI,ESI
00679062  7D 23                     JGE 0x00679087
00679064  73 0D                     JNC 0x00679073
00679066  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
00679069  8B 72 1C                  MOV ESI,dword ptr [EDX + 0x1c]
0067906C  0F AF C7                  IMUL EAX,EDI
0067906F  03 C6                     ADD EAX,ESI
00679071  EB 02                     JMP 0x00679075
LAB_00679073:
00679073  33 C0                     XOR EAX,EAX
LAB_00679075:
00679075  8B 70 04                  MOV ESI,dword ptr [EAX + 0x4]
00679078  8B 00                     MOV EAX,dword ptr [EAX]
0067907A  85 F6                     TEST ESI,ESI
0067907C  74 0B                     JZ 0x00679089
0067907E  85 C0                     TEST EAX,EAX
00679080  74 05                     JZ 0x00679087
00679082  83 C0 20                  ADD EAX,0x20
00679085  EB 02                     JMP 0x00679089
LAB_00679087:
00679087  33 C0                     XOR EAX,EAX
LAB_00679089:
00679089  66 8B 49 5C               MOV CX,word ptr [ECX + 0x5c]
0067908D  66 3B 48 5C               CMP CX,word ptr [EAX + 0x5c]
00679091  7E 0F                     JLE 0x006790a2
00679093  53                        PUSH EBX
00679094  57                        PUSH EDI
00679095  52                        PUSH EDX
00679096  E8 35 7C 03 00            CALL 0x006b0cd0
0067909B  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
LAB_006790a2:
006790A2  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006790A5  8B FB                     MOV EDI,EBX
006790A7  8B 92 95 06 00 00         MOV EDX,dword ptr [EDX + 0x695]
006790AD  8B 72 0C                  MOV ESI,dword ptr [EDX + 0xc]
006790B0  8D 46 FF                  LEA EAX,[ESI + -0x1]
006790B3  3B F8                     CMP EDI,EAX
006790B5  0F 8C 33 FF FF FF         JL 0x00678fee
006790BB  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006790BE  85 C0                     TEST EAX,EAX
006790C0  0F 85 18 FF FF FF         JNZ 0x00678fde
LAB_006790c6:
006790C6  5F                        POP EDI
006790C7  5E                        POP ESI
006790C8  5B                        POP EBX
006790C9  8B E5                     MOV ESP,EBP
006790CB  5D                        POP EBP
006790CC  C3                        RET
