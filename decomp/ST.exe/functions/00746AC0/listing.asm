FUN_00746ac0:
00746AC0  55                        PUSH EBP
00746AC1  8B EC                     MOV EBP,ESP
00746AC3  51                        PUSH ECX
00746AC4  83 3D 6C A3 85 00 00      CMP dword ptr [0x0085a36c],0x0
00746ACB  75 15                     JNZ 0x00746ae2
00746ACD  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00746AD0  50                        PUSH EAX
00746AD1  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00746AD4  51                        PUSH ECX
00746AD5  E8 86 7A FE FF            CALL 0x0072e560
00746ADA  83 C4 08                  ADD ESP,0x8
00746ADD  E9 9F 00 00 00            JMP 0x00746b81
LAB_00746ae2:
00746AE2  EB 09                     JMP 0x00746aed
LAB_00746ae4:
00746AE4  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00746AE7  83 C2 01                  ADD EDX,0x1
00746AEA  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
LAB_00746aed:
00746AED  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00746AF0  66 0F B6 08               MOVZX CX,byte ptr [EAX]
00746AF4  66 89 4D FC               MOV word ptr [EBP + -0x4],CX
00746AF8  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00746AFB  81 E2 FF FF 00 00         AND EDX,0xffff
00746B01  85 D2                     TEST EDX,EDX
00746B03  74 68                     JZ 0x00746b6d
00746B05  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00746B08  25 FF 00 00 00            AND EAX,0xff
00746B0D  33 C9                     XOR ECX,ECX
00746B0F  8A 88 81 A4 85 00         MOV CL,byte ptr [EAX + 0x85a481]
00746B15  83 E1 04                  AND ECX,0x4
00746B18  85 C9                     TEST ECX,ECX
00746B1A  74 3C                     JZ 0x00746b58
00746B1C  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00746B1F  83 C2 01                  ADD EDX,0x1
00746B22  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
00746B25  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00746B28  33 C9                     XOR ECX,ECX
00746B2A  8A 08                     MOV CL,byte ptr [EAX]
00746B2C  85 C9                     TEST ECX,ECX
00746B2E  75 04                     JNZ 0x00746b34
00746B30  33 C0                     XOR EAX,EAX
00746B32  EB 4D                     JMP 0x00746b81
LAB_00746b34:
00746B34  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00746B37  81 E2 FF FF 00 00         AND EDX,0xffff
00746B3D  C1 E2 08                  SHL EDX,0x8
00746B40  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00746B43  33 C9                     XOR ECX,ECX
00746B45  8A 08                     MOV CL,byte ptr [EAX]
00746B47  0B D1                     OR EDX,ECX
00746B49  39 55 0C                  CMP dword ptr [EBP + 0xc],EDX
00746B4C  75 08                     JNZ 0x00746b56
00746B4E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00746B51  83 E8 01                  SUB EAX,0x1
00746B54  EB 2B                     JMP 0x00746b81
LAB_00746b56:
00746B56  EB 10                     JMP 0x00746b68
LAB_00746b58:
00746B58  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00746B5B  81 E2 FF FF 00 00         AND EDX,0xffff
00746B61  39 55 0C                  CMP dword ptr [EBP + 0xc],EDX
00746B64  75 02                     JNZ 0x00746b68
00746B66  EB 05                     JMP 0x00746b6d
LAB_00746b68:
00746B68  E9 77 FF FF FF            JMP 0x00746ae4
LAB_00746b6d:
00746B6D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00746B70  25 FF FF 00 00            AND EAX,0xffff
00746B75  39 45 0C                  CMP dword ptr [EBP + 0xc],EAX
00746B78  75 05                     JNZ 0x00746b7f
00746B7A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00746B7D  EB 02                     JMP 0x00746b81
LAB_00746b7f:
00746B7F  33 C0                     XOR EAX,EAX
LAB_00746b81:
00746B81  8B E5                     MOV ESP,EBP
00746B83  5D                        POP EBP
00746B84  C3                        RET
