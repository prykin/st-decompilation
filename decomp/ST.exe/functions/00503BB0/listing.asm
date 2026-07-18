CPanelTy::SetCmdBoat:
00503BB0  55                        PUSH EBP
00503BB1  8B EC                     MOV EBP,ESP
00503BB3  81 EC 98 00 00 00         SUB ESP,0x98
00503BB9  A1 84 87 80 00            MOV EAX,[0x00808784]
00503BBE  56                        PUSH ESI
00503BBF  85 C0                     TEST EAX,EAX
00503BC1  57                        PUSH EDI
00503BC2  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00503BC5  0F 85 54 03 00 00         JNZ 0x00503f1f
00503BCB  A1 88 87 80 00            MOV EAX,[0x00808788]
00503BD0  85 C0                     TEST EAX,EAX
00503BD2  75 16                     JNZ 0x00503bea
00503BD4  A1 8C 87 80 00            MOV EAX,[0x0080878c]
00503BD9  85 C0                     TEST EAX,EAX
00503BDB  75 0D                     JNZ 0x00503bea
00503BDD  A1 90 87 80 00            MOV EAX,[0x00808790]
00503BE2  85 C0                     TEST EAX,EAX
00503BE4  75 04                     JNZ 0x00503bea
00503BE6  33 C0                     XOR EAX,EAX
00503BE8  EB 05                     JMP 0x00503bef
LAB_00503bea:
00503BEA  B8 01 00 00 00            MOV EAX,0x1
LAB_00503bef:
00503BEF  85 C0                     TEST EAX,EAX
00503BF1  0F 85 28 03 00 00         JNZ 0x00503f1f
00503BF7  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00503BFC  8D 55 B4                  LEA EDX,[EBP + -0x4c]
00503BFF  8D 4D B0                  LEA ECX,[EBP + -0x50]
00503C02  6A 00                     PUSH 0x0
00503C04  52                        PUSH EDX
00503C05  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
00503C08  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00503C0E  E8 DD 9B 22 00            CALL 0x0072d7f0
00503C13  8B F0                     MOV ESI,EAX
00503C15  83 C4 08                  ADD ESP,0x8
00503C18  85 F6                     TEST ESI,ESI
00503C1A  0F 85 C0 02 00 00         JNZ 0x00503ee0
00503C20  68 AE 00 00 00            PUSH 0xae
00503C25  E8 05 22 F0 FF            CALL 0x00405e2f
00503C2A  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
00503C2D  83 C4 04                  ADD ESP,0x4
00503C30  8A 87 64 0B 00 00         MOV AL,byte ptr [EDI + 0xb64]
00503C36  89 B7 2C 01 00 00         MOV dword ptr [EDI + 0x12c],ESI
00503C3C  84 C0                     TEST AL,AL
00503C3E  75 0A                     JNZ 0x00503c4a
00503C40  56                        PUSH ESI
00503C41  6A 01                     PUSH 0x1
00503C43  8B CF                     MOV ECX,EDI
00503C45  E8 CB E1 EF FF            CALL 0x00401e15
LAB_00503c4a:
00503C4A  C7 87 2C 01 00 00 01 00 00 00  MOV dword ptr [EDI + 0x12c],0x1
00503C54  8B 0D E8 16 80 00         MOV ECX,dword ptr [0x008016e8]
00503C5A  85 C9                     TEST ECX,ECX
00503C5C  74 07                     JZ 0x00503c65
00503C5E  6A 00                     PUSH 0x0
00503C60  E8 0E DE EF FF            CALL 0x00401a73
LAB_00503c65:
00503C65  8B 0D 7C 16 80 00         MOV ECX,dword ptr [0x0080167c]
00503C6B  85 C9                     TEST ECX,ECX
00503C6D  74 07                     JZ 0x00503c76
00503C6F  6A 00                     PUSH 0x0
00503C71  E8 FD DD EF FF            CALL 0x00401a73
LAB_00503c76:
00503C76  8B 0D 80 16 80 00         MOV ECX,dword ptr [0x00801680]
00503C7C  85 C9                     TEST ECX,ECX
00503C7E  74 07                     JZ 0x00503c87
00503C80  6A 00                     PUSH 0x0
00503C82  E8 EC DD EF FF            CALL 0x00401a73
LAB_00503c87:
00503C87  8B 0D 98 16 80 00         MOV ECX,dword ptr [0x00801698]
00503C8D  85 C9                     TEST ECX,ECX
00503C8F  74 07                     JZ 0x00503c98
00503C91  8B 01                     MOV EAX,dword ptr [ECX]
00503C93  6A 00                     PUSH 0x0
00503C95  FF 50 1C                  CALL dword ptr [EAX + 0x1c]
LAB_00503c98:
00503C98  8B 0D 44 2A 80 00         MOV ECX,dword ptr [0x00802a44]
00503C9E  85 C9                     TEST ECX,ECX
00503CA0  74 09                     JZ 0x00503cab
00503CA2  6A 00                     PUSH 0x0
00503CA4  6A 00                     PUSH 0x0
00503CA6  E8 4C 0E F0 FF            CALL 0x00404af7
LAB_00503cab:
00503CAB  8B 0D 84 16 80 00         MOV ECX,dword ptr [0x00801684]
00503CB1  85 C9                     TEST ECX,ECX
00503CB3  74 07                     JZ 0x00503cbc
00503CB5  6A 00                     PUSH 0x0
00503CB7  E8 B7 DD EF FF            CALL 0x00401a73
LAB_00503cbc:
00503CBC  8B 0D 78 16 80 00         MOV ECX,dword ptr [0x00801678]
00503CC2  85 C9                     TEST ECX,ECX
00503CC4  74 07                     JZ 0x00503ccd
00503CC6  8B 11                     MOV EDX,dword ptr [ECX]
00503CC8  6A 00                     PUSH 0x0
00503CCA  FF 52 1C                  CALL dword ptr [EDX + 0x1c]
LAB_00503ccd:
00503CCD  8B 0D EC 16 80 00         MOV ECX,dword ptr [0x008016ec]
00503CD3  85 C9                     TEST ECX,ECX
00503CD5  74 07                     JZ 0x00503cde
00503CD7  8B 01                     MOV EAX,dword ptr [ECX]
00503CD9  6A 00                     PUSH 0x0
00503CDB  FF 50 1C                  CALL dword ptr [EAX + 0x1c]
LAB_00503cde:
00503CDE  8B 0D 48 2A 80 00         MOV ECX,dword ptr [0x00802a48]
00503CE4  85 C9                     TEST ECX,ECX
00503CE6  74 07                     JZ 0x00503cef
00503CE8  8B 11                     MOV EDX,dword ptr [ECX]
00503CEA  6A 00                     PUSH 0x0
00503CEC  FF 52 1C                  CALL dword ptr [EDX + 0x1c]
LAB_00503cef:
00503CEF  8B 0D 8C 16 80 00         MOV ECX,dword ptr [0x0080168c]
00503CF5  85 C9                     TEST ECX,ECX
00503CF7  74 07                     JZ 0x00503d00
00503CF9  8B 01                     MOV EAX,dword ptr [ECX]
00503CFB  6A 00                     PUSH 0x0
00503CFD  FF 50 1C                  CALL dword ptr [EAX + 0x1c]
LAB_00503d00:
00503D00  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
00503D06  E8 F1 03 F0 FF            CALL 0x004040fc
00503D0B  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00503D0E  81 E1 FF 00 00 00         AND ECX,0xff
00503D14  8A 8C 39 A2 0B 00 00      MOV CL,byte ptr [ECX + EDI*0x1 + 0xba2]
00503D1B  8B C1                     MOV EAX,ECX
00503D1D  25 FF 00 00 00            AND EAX,0xff
00503D22  8D 70 FF                  LEA ESI,[EAX + -0x1]
00503D25  83 FE 4B                  CMP ESI,0x4b
00503D28  0F 87 A1 01 00 00         JA 0x00503ecf
00503D2E  33 D2                     XOR EDX,EDX
00503D30  8A 96 50 3F 50 00         MOV DL,byte ptr [ESI + 0x503f50]
switchD_00503d36::switchD:
00503D36  FF 24 95 28 3F 50 00      JMP dword ptr [EDX*0x4 + 0x503f28]
switchD_00503d36::caseD_1:
00503D3D  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00503D43  6A FF                     PUSH -0x1
00503D45  8D 45 FF                  LEA EAX,[EBP + -0x1]
00503D48  6A 00                     PUSH 0x0
00503D4A  50                        PUSH EAX
00503D4B  6A 0A                     PUSH 0xa
00503D4D  C6 45 FF 00               MOV byte ptr [EBP + -0x1],0x0
00503D51  E8 DD FE EF FF            CALL 0x00403c33
00503D56  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
00503D59  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00503D5F  5F                        POP EDI
00503D60  5E                        POP ESI
00503D61  8B E5                     MOV ESP,EBP
00503D63  5D                        POP EBP
00503D64  C2 04 00                  RET 0x4
switchD_00503d36::caseD_2:
00503D67  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
00503D6D  6A 00                     PUSH 0x0
00503D6F  50                        PUSH EAX
00503D70  E8 38 F8 EF FF            CALL 0x004035ad
00503D75  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
00503D78  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00503D7E  5F                        POP EDI
00503D7F  5E                        POP ESI
00503D80  8B E5                     MOV ESP,EBP
00503D82  5D                        POP EBP
00503D83  C2 04 00                  RET 0x4
switchD_00503d36::caseD_e:
00503D86  8B 0D 84 16 80 00         MOV ECX,dword ptr [0x00801684]
00503D8C  85 C9                     TEST ECX,ECX
00503D8E  0F 84 34 01 00 00         JZ 0x00503ec8
00503D94  66 83 B9 72 01 00 00 02   CMP word ptr [ECX + 0x172],0x2
00503D9C  0F 85 26 01 00 00         JNZ 0x00503ec8
00503DA2  6A 01                     PUSH 0x1
00503DA4  E8 CA DC EF FF            CALL 0x00401a73
00503DA9  E9 1A 01 00 00            JMP 0x00503ec8
switchD_00503d36::caseD_2f:
00503DAE  8B 0D 78 16 80 00         MOV ECX,dword ptr [0x00801678]
00503DB4  85 C9                     TEST ECX,ECX
00503DB6  0F 84 0C 01 00 00         JZ 0x00503ec8
00503DBC  66 83 B9 72 01 00 00 02   CMP word ptr [ECX + 0x172],0x2
00503DC4  0F 85 FE 00 00 00         JNZ 0x00503ec8
00503DCA  8B 11                     MOV EDX,dword ptr [ECX]
00503DCC  6A 01                     PUSH 0x1
00503DCE  FF 52 1C                  CALL dword ptr [EDX + 0x1c]
00503DD1  E9 F2 00 00 00            JMP 0x00503ec8
switchD_00503d36::caseD_4:
00503DD6  B9 08 00 00 00            MOV ECX,0x8
00503DDB  33 C0                     XOR EAX,EAX
00503DDD  8D 7D 8C                  LEA EDI,[EBP + -0x74]
00503DE0  6A FF                     PUSH -0x1
00503DE2  F3 AB                     STOSD.REP ES:EDI
00503DE4  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00503DEA  6A 00                     PUSH 0x0
00503DEC  AA                        STOSB ES:EDI
00503DED  8D 45 8C                  LEA EAX,[EBP + -0x74]
00503DF0  C6 45 8C 0A               MOV byte ptr [EBP + -0x74],0xa
00503DF4  50                        PUSH EAX
00503DF5  6A 17                     PUSH 0x17
00503DF7  E8 37 FE EF FF            CALL 0x00403c33
00503DFC  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
00503DFF  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00503E05  5F                        POP EDI
00503E06  5E                        POP ESI
00503E07  8B E5                     MOV ESP,EBP
00503E09  5D                        POP EBP
00503E0A  C2 04 00                  RET 0x4
switchD_00503d36::caseD_48:
00503E0D  B9 08 00 00 00            MOV ECX,0x8
00503E12  33 C0                     XOR EAX,EAX
00503E14  8D BD 68 FF FF FF         LEA EDI,[EBP + 0xffffff68]
00503E1A  6A FF                     PUSH -0x1
00503E1C  F3 AB                     STOSD.REP ES:EDI
00503E1E  8D 8D 68 FF FF FF         LEA ECX,[EBP + 0xffffff68]
00503E24  6A 00                     PUSH 0x0
00503E26  51                        PUSH ECX
00503E27  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00503E2D  AA                        STOSB ES:EDI
00503E2E  6A 17                     PUSH 0x17
00503E30  C6 85 68 FF FF FF 14      MOV byte ptr [EBP + 0xffffff68],0x14
00503E37  E8 F7 FD EF FF            CALL 0x00403c33
00503E3C  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
00503E3F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00503E45  5F                        POP EDI
00503E46  5E                        POP ESI
00503E47  8B E5                     MOV ESP,EBP
00503E49  5D                        POP EBP
00503E4A  C2 04 00                  RET 0x4
switchD_00503d36::caseD_14:
00503E4D  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00503E53  33 D2                     XOR EDX,EDX
00503E55  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00503E58  6A FF                     PUSH -0x1
00503E5A  8D 45 F8                  LEA EAX,[EBP + -0x8]
00503E5D  52                        PUSH EDX
00503E5E  50                        PUSH EAX
00503E5F  6A 21                     PUSH 0x21
00503E61  88 55 FC                  MOV byte ptr [EBP + -0x4],DL
00503E64  C6 45 F8 03               MOV byte ptr [EBP + -0x8],0x3
00503E68  E8 C6 FD EF FF            CALL 0x00403c33
00503E6D  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
00503E70  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00503E76  5F                        POP EDI
00503E77  5E                        POP ESI
00503E78  8B E5                     MOV ESP,EBP
00503E7A  5D                        POP EBP
00503E7B  C2 04 00                  RET 0x4
switchD_00503d36::caseD_b:
00503E7E  80 F9 0B                  CMP CL,0xb
00503E81  6A FF                     PUSH -0x1
00503E83  0F 94 C1                  SETZ CL
00503E86  8D 55 FE                  LEA EDX,[EBP + -0x2]
00503E89  6A 00                     PUSH 0x0
00503E8B  88 4D FE                  MOV byte ptr [EBP + -0x2],CL
00503E8E  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00503E94  52                        PUSH EDX
00503E95  6A 28                     PUSH 0x28
00503E97  E8 97 FD EF FF            CALL 0x00403c33
00503E9C  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
00503E9F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00503EA5  5F                        POP EDI
00503EA6  5E                        POP ESI
00503EA7  8B E5                     MOV ESP,EBP
00503EA9  5D                        POP EBP
00503EAA  C2 04 00                  RET 0x4
switchD_00503d36::caseD_4c:
00503EAD  8B 0D EC 16 80 00         MOV ECX,dword ptr [0x008016ec]
00503EB3  85 C9                     TEST ECX,ECX
00503EB5  74 11                     JZ 0x00503ec8
00503EB7  66 83 B9 72 01 00 00 02   CMP word ptr [ECX + 0x172],0x2
00503EBF  75 07                     JNZ 0x00503ec8
00503EC1  8B 01                     MOV EAX,dword ptr [ECX]
00503EC3  6A 01                     PUSH 0x1
00503EC5  FF 50 1C                  CALL dword ptr [EAX + 0x1c]
LAB_00503ec8:
00503EC8  8B CF                     MOV ECX,EDI
00503ECA  E8 C9 E8 EF FF            CALL 0x00402798
switchD_00503d36::caseD_15:
00503ECF  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
00503ED2  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00503ED8  5F                        POP EDI
00503ED9  5E                        POP ESI
00503EDA  8B E5                     MOV ESP,EBP
00503EDC  5D                        POP EBP
00503EDD  C2 04 00                  RET 0x4
LAB_00503ee0:
00503EE0  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
00503EE3  68 84 26 7C 00            PUSH 0x7c2684
00503EE8  68 CC 4C 7A 00            PUSH 0x7a4ccc
00503EED  56                        PUSH ESI
00503EEE  6A 00                     PUSH 0x0
00503EF0  68 FF 02 00 00            PUSH 0x2ff
00503EF5  68 24 25 7C 00            PUSH 0x7c2524
00503EFA  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00503F00  E8 CB 95 1A 00            CALL 0x006ad4d0
00503F05  83 C4 18                  ADD ESP,0x18
00503F08  85 C0                     TEST EAX,EAX
00503F0A  74 01                     JZ 0x00503f0d
00503F0C  CC                        INT3
LAB_00503f0d:
00503F0D  68 FF 02 00 00            PUSH 0x2ff
00503F12  68 24 25 7C 00            PUSH 0x7c2524
00503F17  6A 00                     PUSH 0x0
00503F19  56                        PUSH ESI
00503F1A  E8 21 1F 1A 00            CALL 0x006a5e40
LAB_00503f1f:
00503F1F  5F                        POP EDI
00503F20  5E                        POP ESI
00503F21  8B E5                     MOV ESP,EBP
00503F23  5D                        POP EBP
00503F24  C2 04 00                  RET 0x4
