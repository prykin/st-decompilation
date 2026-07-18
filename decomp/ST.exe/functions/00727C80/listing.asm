FUN_00727c80:
00727C80  55                        PUSH EBP
00727C81  8B EC                     MOV EBP,ESP
00727C83  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00727C86  A1 70 70 85 00            MOV EAX,[0x00857070]
00727C8B  53                        PUSH EBX
00727C8C  56                        PUSH ESI
00727C8D  3B D0                     CMP EDX,EAX
00727C8F  57                        PUSH EDI
00727C90  74 4B                     JZ 0x00727cdd
00727C92  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00727C95  8B 3E                     MOV EDI,dword ptr [ESI]
LAB_00727c97:
00727C97  8D 04 17                  LEA EAX,[EDI + EDX*0x1]
00727C9A  83 F8 03                  CMP EAX,0x3
00727C9D  7C 04                     JL 0x00727ca3
00727C9F  33 C0                     XOR EAX,EAX
00727CA1  EB 09                     JMP 0x00727cac
LAB_00727ca3:
00727CA3  85 C0                     TEST EAX,EAX
00727CA5  7D 05                     JGE 0x00727cac
00727CA7  B8 02 00 00 00            MOV EAX,0x2
LAB_00727cac:
00727CAC  8B C8                     MOV ECX,EAX
00727CAE  8B DA                     MOV EBX,EDX
00727CB0  C1 E1 04                  SHL ECX,0x4
00727CB3  C1 E3 04                  SHL EBX,0x4
00727CB6  8B 89 AC 70 85 00         MOV ECX,dword ptr [ECX + 0x8570ac]
00727CBC  8B 9B AC 70 85 00         MOV EBX,dword ptr [EBX + 0x8570ac]
00727CC2  C1 F9 10                  SAR ECX,0x10
00727CC5  C1 FB 10                  SAR EBX,0x10
00727CC8  2B CB                     SUB ECX,EBX
00727CCA  85 C9                     TEST ECX,ECX
00727CCC  89 4E 04                  MOV dword ptr [ESI + 0x4],ECX
00727CCF  7F 15                     JG 0x00727ce6
00727CD1  8B 0D 70 70 85 00         MOV ECX,dword ptr [0x00857070]
00727CD7  8B D0                     MOV EDX,EAX
00727CD9  3B C1                     CMP EAX,ECX
00727CDB  75 BA                     JNZ 0x00727c97
LAB_00727cdd:
00727CDD  5F                        POP EDI
00727CDE  5E                        POP ESI
00727CDF  33 C0                     XOR EAX,EAX
00727CE1  5B                        POP EBX
00727CE2  5D                        POP EBP
00727CE3  C2 08 00                  RET 0x8
LAB_00727ce6:
00727CE6  89 46 08                  MOV dword ptr [ESI + 0x8],EAX
00727CE9  C1 E2 04                  SHL EDX,0x4
00727CEC  C1 E0 04                  SHL EAX,0x4
00727CEF  8B FA                     MOV EDI,EDX
00727CF1  8B D8                     MOV EBX,EAX
00727CF3  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
00727CF6  8B 97 A8 70 85 00         MOV EDX,dword ptr [EDI + 0x8570a8]
00727CFC  C1 E0 10                  SHL EAX,0x10
00727CFF  89 56 24                  MOV dword ptr [ESI + 0x24],EDX
00727D02  8B 8B A8 70 85 00         MOV ECX,dword ptr [EBX + 0x8570a8]
00727D08  50                        PUSH EAX
00727D09  8B 87 A8 70 85 00         MOV EAX,dword ptr [EDI + 0x8570a8]
00727D0F  2B C8                     SUB ECX,EAX
00727D11  51                        PUSH ECX
00727D12  E8 F9 38 FB FF            CALL 0x006db610
00727D17  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
00727D1A  89 46 28                  MOV dword ptr [ESI + 0x28],EAX
00727D1D  8B BF B0 70 85 00         MOV EDI,dword ptr [EDI + 0x8570b0]
00727D23  89 7E 1C                  MOV dword ptr [ESI + 0x1c],EDI
00727D26  8B 83 B0 70 85 00         MOV EAX,dword ptr [EBX + 0x8570b0]
00727D2C  C1 E2 10                  SHL EDX,0x10
00727D2F  2B C7                     SUB EAX,EDI
00727D31  52                        PUSH EDX
00727D32  50                        PUSH EAX
00727D33  E8 D8 38 FB FF            CALL 0x006db610
00727D38  89 46 20                  MOV dword ptr [ESI + 0x20],EAX
00727D3B  5F                        POP EDI
00727D3C  5E                        POP ESI
00727D3D  B8 01 00 00 00            MOV EAX,0x1
00727D42  5B                        POP EBX
00727D43  5D                        POP EBP
00727D44  C2 08 00                  RET 0x8
