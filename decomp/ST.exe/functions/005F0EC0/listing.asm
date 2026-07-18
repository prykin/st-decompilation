FUN_005f0ec0:
005F0EC0  55                        PUSH EBP
005F0EC1  8B EC                     MOV EBP,ESP
005F0EC3  81 EC 54 01 00 00         SUB ESP,0x154
005F0EC9  53                        PUSH EBX
005F0ECA  56                        PUSH ESI
005F0ECB  57                        PUSH EDI
005F0ECC  B9 54 00 00 00            MOV ECX,0x54
005F0ED1  33 C0                     XOR EAX,EAX
005F0ED3  8D BD AC FE FF FF         LEA EDI,[EBP + 0xfffffeac]
005F0ED9  F3 AB                     STOSD.REP ES:EDI
005F0EDB  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005F0EDE  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
005F0EE1  AA                        STOSB ES:EDI
005F0EE2  B8 01 00 00 00            MOV EAX,0x1
005F0EE7  89 8D C8 FE FF FF         MOV dword ptr [EBP + 0xfffffec8],ECX
005F0EED  89 85 B4 FE FF FF         MOV dword ptr [EBP + 0xfffffeb4],EAX
005F0EF3  89 85 B8 FE FF FF         MOV dword ptr [EBP + 0xfffffeb8],EAX
005F0EF9  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
005F0EFC  89 95 CC FE FF FF         MOV dword ptr [EBP + 0xfffffecc],EDX
005F0F02  89 85 C4 FE FF FF         MOV dword ptr [EBP + 0xfffffec4],EAX
005F0F08  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
005F0F0B  33 DB                     XOR EBX,EBX
005F0F0D  89 45 F1                  MOV dword ptr [EBP + -0xf],EAX
005F0F10  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
005F0F13  C7 85 AC FE FF FF 72 01 00 00  MOV dword ptr [EBP + 0xfffffeac],0x172
005F0F1D  C7 85 B0 FE FF FF FF 00 00 00  MOV dword ptr [EBP + 0xfffffeb0],0xff
005F0F27  89 9D BC FE FF FF         MOV dword ptr [EBP + 0xfffffebc],EBX
005F0F2D  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
005F0F30  C7 85 C0 FE FF FF FD 00 00 00  MOV dword ptr [EBP + 0xfffffec0],0xfd
005F0F3A  89 9D D6 FE FF FF         MOV dword ptr [EBP + 0xfffffed6],EBX
005F0F40  8D 54 C8 64               LEA EDX,[EAX + ECX*0x8 + 0x64]
005F0F44  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
005F0F47  66 89 95 D0 FE FF FF      MOV word ptr [EBP + 0xfffffed0],DX
005F0F4E  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
005F0F51  8D 14 89                  LEA EDX,[ECX + ECX*0x4]
005F0F54  89 4D F5                  MOV dword ptr [EBP + -0xb],ECX
005F0F57  89 85 DA FE FF FF         MOV dword ptr [EBP + 0xfffffeda],EAX
005F0F5D  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
005F0F60  8D 54 D1 64               LEA EDX,[ECX + EDX*0x8 + 0x64]
005F0F64  66 89 95 D2 FE FF FF      MOV word ptr [EBP + 0xfffffed2],DX
005F0F6B  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
005F0F6E  89 55 F9                  MOV dword ptr [EBP + -0x7],EDX
005F0F71  8D 34 92                  LEA ESI,[EDX + EDX*0x4]
005F0F74  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
005F0F77  3B D3                     CMP EDX,EBX
005F0F79  8D 34 B6                  LEA ESI,[ESI + ESI*0x4]
005F0F7C  8D 34 F5 64 00 00 00      LEA ESI,[ESI*0x8 + 0x64]
005F0F83  66 89 B5 D4 FE FF FF      MOV word ptr [EBP + 0xfffffed4],SI
005F0F8A  74 50                     JZ 0x005f0fdc
005F0F8C  8B FA                     MOV EDI,EDX
005F0F8E  83 C9 FF                  OR ECX,0xffffffff
005F0F91  33 C0                     XOR EAX,EAX
005F0F93  F2 AE                     SCASB.REPNE ES:EDI
005F0F95  F7 D1                     NOT ECX
005F0F97  49                        DEC ECX
005F0F98  83 F9 0E                  CMP ECX,0xe
005F0F9B  77 27                     JA 0x005f0fc4
005F0F9D  8B FA                     MOV EDI,EDX
005F0F9F  83 C9 FF                  OR ECX,0xffffffff
005F0FA2  F2 AE                     SCASB.REPNE ES:EDI
005F0FA4  8D B5 DE FE FF FF         LEA ESI,[EBP + 0xfffffede]
005F0FAA  F7 D1                     NOT ECX
005F0FAC  2B F9                     SUB EDI,ECX
005F0FAE  8B C6                     MOV EAX,ESI
005F0FB0  8B D1                     MOV EDX,ECX
005F0FB2  8B F7                     MOV ESI,EDI
005F0FB4  8B F8                     MOV EDI,EAX
005F0FB6  C1 E9 02                  SHR ECX,0x2
005F0FB9  F3 A5                     MOVSD.REP ES:EDI,ESI
005F0FBB  8B CA                     MOV ECX,EDX
005F0FBD  83 E1 03                  AND ECX,0x3
005F0FC0  F3 A4                     MOVSB.REP ES:EDI,ESI
005F0FC2  EB 18                     JMP 0x005f0fdc
LAB_005f0fc4:
005F0FC4  6A 0E                     PUSH 0xe
005F0FC6  8D 8D DE FE FF FF         LEA ECX,[EBP + 0xfffffede]
005F0FCC  52                        PUSH EDX
005F0FCD  51                        PUSH ECX
005F0FCE  E8 6D D3 13 00            CALL 0x0072e340
005F0FD3  83 C4 0C                  ADD ESP,0xc
005F0FD6  88 9D EC FE FF FF         MOV byte ptr [EBP + 0xfffffeec],BL
LAB_005f0fdc:
005F0FDC  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
005F0FDF  3B D3                     CMP EDX,EBX
005F0FE1  74 53                     JZ 0x005f1036
005F0FE3  8B FA                     MOV EDI,EDX
005F0FE5  83 C9 FF                  OR ECX,0xffffffff
005F0FE8  33 C0                     XOR EAX,EAX
005F0FEA  F2 AE                     SCASB.REPNE ES:EDI
005F0FEC  F7 D1                     NOT ECX
005F0FEE  49                        DEC ECX
005F0FEF  81 F9 03 01 00 00         CMP ECX,0x103
005F0FF5  77 27                     JA 0x005f101e
005F0FF7  8B FA                     MOV EDI,EDX
005F0FF9  83 C9 FF                  OR ECX,0xffffffff
005F0FFC  F2 AE                     SCASB.REPNE ES:EDI
005F0FFE  8D B5 ED FE FF FF         LEA ESI,[EBP + 0xfffffeed]
005F1004  F7 D1                     NOT ECX
005F1006  2B F9                     SUB EDI,ECX
005F1008  8B C6                     MOV EAX,ESI
005F100A  8B D1                     MOV EDX,ECX
005F100C  8B F7                     MOV ESI,EDI
005F100E  8B F8                     MOV EDI,EAX
005F1010  C1 E9 02                  SHR ECX,0x2
005F1013  F3 A5                     MOVSD.REP ES:EDI,ESI
005F1015  8B CA                     MOV ECX,EDX
005F1017  83 E1 03                  AND ECX,0x3
005F101A  F3 A4                     MOVSB.REP ES:EDI,ESI
005F101C  EB 18                     JMP 0x005f1036
LAB_005f101e:
005F101E  68 03 01 00 00            PUSH 0x103
005F1023  8D 8D ED FE FF FF         LEA ECX,[EBP + 0xfffffeed]
005F1029  52                        PUSH EDX
005F102A  51                        PUSH ECX
005F102B  E8 10 D3 13 00            CALL 0x0072e340
005F1030  83 C4 0C                  ADD ESP,0xc
005F1033  88 5D F0                  MOV byte ptr [EBP + -0x10],BL
LAB_005f1036:
005F1036  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
005F103C  8D 85 AC FE FF FF         LEA EAX,[EBP + 0xfffffeac]
005F1042  53                        PUSH EBX
005F1043  50                        PUSH EAX
005F1044  8B 11                     MOV EDX,dword ptr [ECX]
005F1046  53                        PUSH EBX
005F1047  53                        PUSH EBX
005F1048  68 4F 01 00 00            PUSH 0x14f
005F104D  FF 52 08                  CALL dword ptr [EDX + 0x8]
005F1050  5F                        POP EDI
005F1051  5E                        POP ESI
005F1052  5B                        POP EBX
005F1053  8B E5                     MOV ESP,EBP
005F1055  5D                        POP EBP
005F1056  C3                        RET
