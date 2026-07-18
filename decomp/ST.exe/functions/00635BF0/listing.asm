FUN_00635bf0:
00635BF0  55                        PUSH EBP
00635BF1  8B EC                     MOV EBP,ESP
00635BF3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00635BF6  53                        PUSH EBX
00635BF7  56                        PUSH ESI
00635BF8  57                        PUSH EDI
00635BF9  85 C9                     TEST ECX,ECX
00635BFB  B8 79 19 8C 02            MOV EAX,0x28c1979
00635C00  7C 10                     JL 0x00635c12
00635C02  F7 E9                     IMUL ECX
00635C04  D1 FA                     SAR EDX,0x1
00635C06  8B C2                     MOV EAX,EDX
00635C08  C1 E8 1F                  SHR EAX,0x1f
00635C0B  03 D0                     ADD EDX,EAX
00635C0D  0F BF DA                  MOVSX EBX,DX
00635C10  EB 0F                     JMP 0x00635c21
LAB_00635c12:
00635C12  F7 E9                     IMUL ECX
00635C14  D1 FA                     SAR EDX,0x1
00635C16  8B CA                     MOV ECX,EDX
00635C18  C1 E9 1F                  SHR ECX,0x1f
00635C1B  03 D1                     ADD EDX,ECX
00635C1D  0F BF DA                  MOVSX EBX,DX
00635C20  4B                        DEC EBX
LAB_00635c21:
00635C21  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00635C24  B8 79 19 8C 02            MOV EAX,0x28c1979
00635C29  85 C9                     TEST ECX,ECX
00635C2B  7C 10                     JL 0x00635c3d
00635C2D  F7 E9                     IMUL ECX
00635C2F  D1 FA                     SAR EDX,0x1
00635C31  8B C2                     MOV EAX,EDX
00635C33  C1 E8 1F                  SHR EAX,0x1f
00635C36  03 D0                     ADD EDX,EAX
00635C38  0F BF F2                  MOVSX ESI,DX
00635C3B  EB 0F                     JMP 0x00635c4c
LAB_00635c3d:
00635C3D  F7 E9                     IMUL ECX
00635C3F  D1 FA                     SAR EDX,0x1
00635C41  8B CA                     MOV ECX,EDX
00635C43  C1 E9 1F                  SHR ECX,0x1f
00635C46  03 D1                     ADD EDX,ECX
00635C48  0F BF F2                  MOVSX ESI,DX
00635C4B  4E                        DEC ESI
LAB_00635c4c:
00635C4C  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00635C4F  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00635C54  85 C9                     TEST ECX,ECX
00635C56  7C 14                     JL 0x00635c6c
00635C58  F7 E9                     IMUL ECX
00635C5A  C1 FA 06                  SAR EDX,0x6
00635C5D  8B C2                     MOV EAX,EDX
00635C5F  C1 E8 1F                  SHR EAX,0x1f
00635C62  03 D0                     ADD EDX,EAX
00635C64  0F BF CA                  MOVSX ECX,DX
00635C67  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
00635C6A  EB 13                     JMP 0x00635c7f
LAB_00635c6c:
00635C6C  F7 E9                     IMUL ECX
00635C6E  C1 FA 06                  SAR EDX,0x6
00635C71  8B C2                     MOV EAX,EDX
00635C73  C1 E8 1F                  SHR EAX,0x1f
00635C76  03 D0                     ADD EDX,EAX
00635C78  0F BF C2                  MOVSX EAX,DX
00635C7B  48                        DEC EAX
00635C7C  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
LAB_00635c7f:
00635C7F  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00635C85  3B 59 48                  CMP EBX,dword ptr [ECX + 0x48]
00635C88  7C 1A                     JL 0x00635ca4
00635C8A  3B 59 58                  CMP EBX,dword ptr [ECX + 0x58]
00635C8D  7F 15                     JG 0x00635ca4
00635C8F  3B 71 44                  CMP ESI,dword ptr [ECX + 0x44]
00635C92  7C 10                     JL 0x00635ca4
00635C94  3B 71 54                  CMP ESI,dword ptr [ECX + 0x54]
00635C97  7F 0B                     JG 0x00635ca4
00635C99  6A 00                     PUSH 0x0
00635C9B  56                        PUSH ESI
00635C9C  53                        PUSH EBX
00635C9D  E8 2E 7F 0A 00            CALL 0x006ddbd0
00635CA2  EB 02                     JMP 0x00635ca6
LAB_00635ca4:
00635CA4  33 C0                     XOR EAX,EAX
LAB_00635ca6:
00635CA6  84 C0                     TEST AL,AL
00635CA8  0F 84 86 00 00 00         JZ 0x00635d34
00635CAE  8B 3D 88 2A 80 00         MOV EDI,dword ptr [0x00802a88]
00635CB4  85 FF                     TEST EDI,EDI
00635CB6  74 7C                     JZ 0x00635d34
00635CB8  80 3D 4D 87 80 00 FF      CMP byte ptr [0x0080874d],0xff
00635CBF  74 68                     JZ 0x00635d29
00635CC1  8B 87 F8 00 00 00         MOV EAX,dword ptr [EDI + 0xf8]
00635CC7  85 C0                     TEST EAX,EAX
00635CC9  74 5E                     JZ 0x00635d29
00635CCB  8B 87 0C 01 00 00         MOV EAX,dword ptr [EDI + 0x10c]
00635CD1  8D 4D 10                  LEA ECX,[EBP + 0x10]
00635CD4  8D 55 0C                  LEA EDX,[EBP + 0xc]
00635CD7  51                        PUSH ECX
00635CD8  52                        PUSH EDX
00635CD9  56                        PUSH ESI
00635CDA  53                        PUSH EBX
00635CDB  50                        PUSH EAX
00635CDC  8B CF                     MOV ECX,EDI
00635CDE  E8 70 E2 DC FF            CALL 0x00403f53
00635CE3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00635CE6  85 C0                     TEST EAX,EAX
00635CE8  7C 3F                     JL 0x00635d29
00635CEA  83 F8 05                  CMP EAX,0x5
00635CED  7D 3A                     JGE 0x00635d29
00635CEF  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00635CF2  85 D2                     TEST EDX,EDX
00635CF4  7C 33                     JL 0x00635d29
00635CF6  8B 4F 30                  MOV ECX,dword ptr [EDI + 0x30]
00635CF9  3B D1                     CMP EDX,ECX
00635CFB  7D 2C                     JGE 0x00635d29
00635CFD  8B 04 85 D0 AE 79 00      MOV EAX,dword ptr [EAX*0x4 + 0x79aed0]
00635D04  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
00635D07  03 C6                     ADD EAX,ESI
00635D09  85 C0                     TEST EAX,EAX
00635D0B  7C 1C                     JL 0x00635d29
00635D0D  3B 47 34                  CMP EAX,dword ptr [EDI + 0x34]
00635D10  7D 17                     JGE 0x00635d29
00635D12  8B 7F 4C                  MOV EDI,dword ptr [EDI + 0x4c]
00635D15  85 FF                     TEST EDI,EDI
00635D17  74 10                     JZ 0x00635d29
00635D19  0F AF C1                  IMUL EAX,ECX
00635D1C  03 C7                     ADD EAX,EDI
00635D1E  33 C9                     XOR ECX,ECX
00635D20  8A 0C 10                  MOV CL,byte ptr [EAX + EDX*0x1]
00635D23  8B C1                     MOV EAX,ECX
00635D25  85 C0                     TEST EAX,EAX
00635D27  74 09                     JZ 0x00635d32
LAB_00635d29:
00635D29  5F                        POP EDI
00635D2A  5E                        POP ESI
00635D2B  B0 01                     MOV AL,0x1
00635D2D  5B                        POP EBX
00635D2E  5D                        POP EBP
00635D2F  C2 0C 00                  RET 0xc
LAB_00635d32:
00635D32  32 C0                     XOR AL,AL
LAB_00635d34:
00635D34  5F                        POP EDI
00635D35  5E                        POP ESI
00635D36  5B                        POP EBX
00635D37  5D                        POP EBP
00635D38  C2 0C 00                  RET 0xc
