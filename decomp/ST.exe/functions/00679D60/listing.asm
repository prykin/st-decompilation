FUN_00679d60:
00679D60  55                        PUSH EBP
00679D61  8B EC                     MOV EBP,ESP
00679D63  51                        PUSH ECX
00679D64  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00679D67  53                        PUSH EBX
00679D68  56                        PUSH ESI
00679D69  8B F1                     MOV ESI,ECX
00679D6B  85 C0                     TEST EAX,EAX
00679D6D  57                        PUSH EDI
00679D6E  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00679D71  0F 84 A1 00 00 00         JZ 0x00679e18
00679D77  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00679D7A  85 D2                     TEST EDX,EDX
00679D7C  0F 84 96 00 00 00         JZ 0x00679e18
00679D82  8B 86 95 06 00 00         MOV EAX,dword ptr [ESI + 0x695]
00679D88  8B 58 0C                  MOV EBX,dword ptr [EAX + 0xc]
00679D8B  4B                        DEC EBX
00679D8C  0F 88 86 00 00 00         JS 0x00679e18
LAB_00679d92:
00679D92  8B 8E 95 06 00 00         MOV ECX,dword ptr [ESI + 0x695]
00679D98  85 C9                     TEST ECX,ECX
00679D9A  74 75                     JZ 0x00679e11
00679D9C  85 DB                     TEST EBX,EBX
00679D9E  7C 71                     JL 0x00679e11
00679DA0  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
00679DA3  3B D8                     CMP EBX,EAX
00679DA5  7D 6A                     JGE 0x00679e11
00679DA7  73 0D                     JNC 0x00679db6
00679DA9  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00679DAC  8B 79 1C                  MOV EDI,dword ptr [ECX + 0x1c]
00679DAF  0F AF C3                  IMUL EAX,EBX
00679DB2  03 C7                     ADD EAX,EDI
00679DB4  EB 02                     JMP 0x00679db8
LAB_00679db6:
00679DB6  33 C0                     XOR EAX,EAX
LAB_00679db8:
00679DB8  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
00679DBB  85 C9                     TEST ECX,ECX
00679DBD  74 52                     JZ 0x00679e11
00679DBF  8B 38                     MOV EDI,dword ptr [EAX]
00679DC1  85 FF                     TEST EDI,EDI
00679DC3  74 4C                     JZ 0x00679e11
00679DC5  80 3A 00                  CMP byte ptr [EDX],0x0
00679DC8  74 32                     JZ 0x00679dfc
00679DCA  8D 77 3B                  LEA ESI,[EDI + 0x3b]
00679DCD  8B C2                     MOV EAX,EDX
LAB_00679dcf:
00679DCF  8A 08                     MOV CL,byte ptr [EAX]
00679DD1  8A D1                     MOV DL,CL
00679DD3  3A 0E                     CMP CL,byte ptr [ESI]
00679DD5  75 1C                     JNZ 0x00679df3
00679DD7  84 D2                     TEST DL,DL
00679DD9  74 14                     JZ 0x00679def
00679DDB  8A 48 01                  MOV CL,byte ptr [EAX + 0x1]
00679DDE  8A D1                     MOV DL,CL
00679DE0  3A 4E 01                  CMP CL,byte ptr [ESI + 0x1]
00679DE3  75 0E                     JNZ 0x00679df3
00679DE5  83 C0 02                  ADD EAX,0x2
00679DE8  83 C6 02                  ADD ESI,0x2
00679DEB  84 D2                     TEST DL,DL
00679DED  75 E0                     JNZ 0x00679dcf
LAB_00679def:
00679DEF  33 C0                     XOR EAX,EAX
00679DF1  EB 05                     JMP 0x00679df8
LAB_00679df3:
00679DF3  1B C0                     SBB EAX,EAX
00679DF5  83 D8 FF                  SBB EAX,-0x1
LAB_00679df8:
00679DF8  85 C0                     TEST EAX,EAX
00679DFA  75 0F                     JNZ 0x00679e0b
LAB_00679dfc:
00679DFC  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00679DFF  8B CF                     MOV ECX,EDI
00679E01  52                        PUSH EDX
00679E02  E8 64 AC D8 FF            CALL 0x00404a6b
00679E07  85 C0                     TEST EAX,EAX
00679E09  75 0F                     JNZ 0x00679e1a
LAB_00679e0b:
00679E0B  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00679E0E  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
LAB_00679e11:
00679E11  4B                        DEC EBX
00679E12  0F 89 7A FF FF FF         JNS 0x00679d92
LAB_00679e18:
00679E18  33 C0                     XOR EAX,EAX
LAB_00679e1a:
00679E1A  5F                        POP EDI
00679E1B  5E                        POP ESI
00679E1C  5B                        POP EBX
00679E1D  8B E5                     MOV ESP,EBP
00679E1F  5D                        POP EBP
00679E20  C2 08 00                  RET 0x8
