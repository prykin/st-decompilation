FUN_00734cd0:
00734CD0  55                        PUSH EBP
00734CD1  8B EC                     MOV EBP,ESP
00734CD3  83 EC 0C                  SUB ESP,0xc
00734CD6  0F BE 05 FC 71 85 00      MOVSX EAX,byte ptr [0x008571fc]
00734CDD  85 C0                     TEST EAX,EAX
00734CDF  74 34                     JZ 0x00734d15
00734CE1  8B 0D F8 71 85 00         MOV ECX,dword ptr [0x008571f8]
00734CE7  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00734CEA  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00734CED  33 C0                     XOR EAX,EAX
00734CEF  83 3A 2D                  CMP dword ptr [EDX],0x2d
00734CF2  0F 94 C0                  SETZ AL
00734CF5  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00734CF8  03 C8                     ADD ECX,EAX
00734CFA  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00734CFD  33 D2                     XOR EDX,EDX
00734CFF  83 7D 10 00               CMP dword ptr [EBP + 0x10],0x0
00734D03  0F 9F C2                  SETG DL
00734D06  52                        PUSH EDX
00734D07  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00734D0A  50                        PUSH EAX
00734D0B  E8 E0 04 00 00            CALL 0x007351f0
00734D10  83 C4 08                  ADD ESP,0x8
00734D13  EB 44                     JMP 0x00734d59
LAB_00734d15:
00734D15  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00734D18  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
00734D1B  52                        PUSH EDX
00734D1C  8B 01                     MOV EAX,dword ptr [ECX]
00734D1E  50                        PUSH EAX
00734D1F  E8 6C 78 00 00            CALL 0x0073c590
00734D24  83 C4 08                  ADD ESP,0x8
00734D27  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00734D2A  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00734D2D  51                        PUSH ECX
00734D2E  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00734D31  83 C2 01                  ADD EDX,0x1
00734D34  52                        PUSH EDX
00734D35  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00734D38  33 C9                     XOR ECX,ECX
00734D3A  83 38 2D                  CMP dword ptr [EAX],0x2d
00734D3D  0F 94 C1                  SETZ CL
00734D40  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00734D43  03 D1                     ADD EDX,ECX
00734D45  33 C0                     XOR EAX,EAX
00734D47  83 7D 10 00               CMP dword ptr [EBP + 0x10],0x0
00734D4B  0F 9F C0                  SETG AL
00734D4E  03 D0                     ADD EDX,EAX
00734D50  52                        PUSH EDX
00734D51  E8 4A B8 00 00            CALL 0x007405a0
00734D56  83 C4 0C                  ADD ESP,0xc
LAB_00734d59:
00734D59  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00734D5C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00734D5F  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00734D62  83 3A 2D                  CMP dword ptr [EDX],0x2d
00734D65  75 0F                     JNZ 0x00734d76
00734D67  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00734D6A  C6 00 2D                  MOV byte ptr [EAX],0x2d
00734D6D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00734D70  83 C1 01                  ADD ECX,0x1
00734D73  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_00734d76:
00734D76  83 7D 10 00               CMP dword ptr [EBP + 0x10],0x0
00734D7A  7E 1F                     JLE 0x00734d9b
00734D7C  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00734D7F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00734D82  8A 48 01                  MOV CL,byte ptr [EAX + 0x1]
00734D85  88 0A                     MOV byte ptr [EDX],CL
00734D87  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00734D8A  83 C2 01                  ADD EDX,0x1
00734D8D  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00734D90  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00734D93  8A 0D 90 14 7F 00         MOV CL,byte ptr [0x007f1490]
00734D99  88 08                     MOV byte ptr [EAX],CL
LAB_00734d9b:
00734D9B  68 A8 01 7A 00            PUSH 0x7a01a8
00734DA0  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00734DA3  03 55 10                  ADD EDX,dword ptr [EBP + 0x10]
00734DA6  0F BE 05 FC 71 85 00      MOVSX EAX,byte ptr [0x008571fc]
00734DAD  F7 D8                     NEG EAX
00734DAF  1B C0                     SBB EAX,EAX
00734DB1  40                        INC EAX
00734DB2  03 D0                     ADD EDX,EAX
00734DB4  52                        PUSH EDX
00734DB5  E8 86 54 00 00            CALL 0x0073a240
00734DBA  83 C4 08                  ADD ESP,0x8
00734DBD  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00734DC0  83 7D 14 00               CMP dword ptr [EBP + 0x14],0x0
00734DC4  74 06                     JZ 0x00734dcc
00734DC6  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00734DC9  C6 01 45                  MOV byte ptr [ECX],0x45
LAB_00734dcc:
00734DCC  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00734DCF  83 C2 01                  ADD EDX,0x1
00734DD2  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00734DD5  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00734DD8  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
00734DDB  0F BE 11                  MOVSX EDX,byte ptr [ECX]
00734DDE  83 FA 30                  CMP EDX,0x30
00734DE1  0F 84 9E 00 00 00         JZ 0x00734e85
00734DE7  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00734DEA  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
00734DED  83 E9 01                  SUB ECX,0x1
00734DF0  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00734DF3  83 7D F4 00               CMP dword ptr [EBP + -0xc],0x0
00734DF7  7D 0E                     JGE 0x00734e07
00734DF9  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00734DFC  F7 DA                     NEG EDX
00734DFE  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00734E01  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00734E04  C6 00 2D                  MOV byte ptr [EAX],0x2d
LAB_00734e07:
00734E07  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00734E0A  83 C1 01                  ADD ECX,0x1
00734E0D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00734E10  83 7D F4 64               CMP dword ptr [EBP + -0xc],0x64
00734E14  7C 25                     JL 0x00734e3b
00734E16  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00734E19  99                        CDQ
00734E1A  B9 64 00 00 00            MOV ECX,0x64
00734E1F  F7 F9                     IDIV ECX
00734E21  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00734E24  8A 0A                     MOV CL,byte ptr [EDX]
00734E26  02 C8                     ADD CL,AL
00734E28  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00734E2B  88 0A                     MOV byte ptr [EDX],CL
00734E2D  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00734E30  99                        CDQ
00734E31  B9 64 00 00 00            MOV ECX,0x64
00734E36  F7 F9                     IDIV ECX
00734E38  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
LAB_00734e3b:
00734E3B  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00734E3E  83 C2 01                  ADD EDX,0x1
00734E41  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00734E44  83 7D F4 0A               CMP dword ptr [EBP + -0xc],0xa
00734E48  7C 25                     JL 0x00734e6f
00734E4A  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00734E4D  99                        CDQ
00734E4E  B9 0A 00 00 00            MOV ECX,0xa
00734E53  F7 F9                     IDIV ECX
00734E55  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00734E58  8A 0A                     MOV CL,byte ptr [EDX]
00734E5A  02 C8                     ADD CL,AL
00734E5C  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00734E5F  88 0A                     MOV byte ptr [EDX],CL
00734E61  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00734E64  99                        CDQ
00734E65  B9 0A 00 00 00            MOV ECX,0xa
00734E6A  F7 F9                     IDIV ECX
00734E6C  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
LAB_00734e6f:
00734E6F  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00734E72  83 C2 01                  ADD EDX,0x1
00734E75  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00734E78  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00734E7B  8A 08                     MOV CL,byte ptr [EAX]
00734E7D  02 4D F4                  ADD CL,byte ptr [EBP + -0xc]
00734E80  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00734E83  88 0A                     MOV byte ptr [EDX],CL
LAB_00734e85:
00734E85  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00734E88  8B E5                     MOV ESP,EBP
00734E8A  5D                        POP EBP
00734E8B  C3                        RET
