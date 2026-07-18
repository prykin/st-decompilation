FUN_006e4ee0:
006E4EE0  53                        PUSH EBX
006E4EE1  56                        PUSH ESI
006E4EE2  8B F1                     MOV ESI,ECX
006E4EE4  57                        PUSH EDI
006E4EE5  BB 01 00 00 00            MOV EBX,0x1
006E4EEA  8B 4E 2C                  MOV ECX,dword ptr [ESI + 0x2c]
006E4EED  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
006E4EF0  85 C0                     TEST EAX,EAX
006E4EF2  74 32                     JZ 0x006e4f26
LAB_006e4ef4:
006E4EF4  76 05                     JBE 0x006e4efb
006E4EF6  8B 49 1C                  MOV ECX,dword ptr [ECX + 0x1c]
006E4EF9  EB 02                     JMP 0x006e4efd
LAB_006e4efb:
006E4EFB  33 C9                     XOR ECX,ECX
LAB_006e4efd:
006E4EFD  51                        PUSH ECX
006E4EFE  8B CE                     MOV ECX,ESI
006E4F00  E8 AB EE FF FF            CALL 0x006e3db0
006E4F05  3D FF FF 00 00            CMP EAX,0xffff
006E4F0A  74 17                     JZ 0x006e4f23
006E4F0C  8B 46 2C                  MOV EAX,dword ptr [ESI + 0x2c]
006E4F0F  6A 00                     PUSH 0x0
006E4F11  50                        PUSH EAX
006E4F12  E8 59 BD FC FF            CALL 0x006b0c70
006E4F17  8B 4E 2C                  MOV ECX,dword ptr [ESI + 0x2c]
006E4F1A  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
006E4F1D  85 C0                     TEST EAX,EAX
006E4F1F  75 D3                     JNZ 0x006e4ef4
006E4F21  EB 03                     JMP 0x006e4f26
LAB_006e4f23:
006E4F23  89 5E 1C                  MOV dword ptr [ESI + 0x1c],EBX
LAB_006e4f26:
006E4F26  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
006E4F29  51                        PUSH ECX
006E4F2A  8B CE                     MOV ECX,ESI
006E4F2C  E8 3F FE FF FF            CALL 0x006e4d70
006E4F31  85 C0                     TEST EAX,EAX
006E4F33  74 07                     JZ 0x006e4f3c
006E4F35  89 5E 1C                  MOV dword ptr [ESI + 0x1c],EBX
006E4F38  5F                        POP EDI
006E4F39  5E                        POP ESI
006E4F3A  5B                        POP EBX
006E4F3B  C3                        RET
LAB_006e4f3c:
006E4F3C  8B 4E 28                  MOV ECX,dword ptr [ESI + 0x28]
006E4F3F  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
006E4F42  85 C0                     TEST EAX,EAX
006E4F44  74 34                     JZ 0x006e4f7a
LAB_006e4f46:
006E4F46  76 05                     JBE 0x006e4f4d
006E4F48  8B 49 1C                  MOV ECX,dword ptr [ECX + 0x1c]
006E4F4B  EB 02                     JMP 0x006e4f4f
LAB_006e4f4d:
006E4F4D  33 C9                     XOR ECX,ECX
LAB_006e4f4f:
006E4F4F  51                        PUSH ECX
006E4F50  8B CE                     MOV ECX,ESI
006E4F52  E8 59 EE FF FF            CALL 0x006e3db0
006E4F57  8B F8                     MOV EDI,EAX
006E4F59  81 FF FF FF 00 00         CMP EDI,0xffff
006E4F5F  74 2B                     JZ 0x006e4f8c
006E4F61  8B 56 28                  MOV EDX,dword ptr [ESI + 0x28]
006E4F64  6A 00                     PUSH 0x0
006E4F66  52                        PUSH EDX
006E4F67  E8 04 BD FC FF            CALL 0x006b0c70
006E4F6C  8B 4E 28                  MOV ECX,dword ptr [ESI + 0x28]
006E4F6F  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
006E4F72  85 C0                     TEST EAX,EAX
006E4F74  75 D0                     JNZ 0x006e4f46
006E4F76  85 FF                     TEST EDI,EDI
006E4F78  75 15                     JNZ 0x006e4f8f
LAB_006e4f7a:
006E4F7A  8B 06                     MOV EAX,dword ptr [ESI]
006E4F7C  8B CE                     MOV ECX,ESI
006E4F7E  FF 50 14                  CALL dword ptr [EAX + 0x14]
006E4F81  85 C0                     TEST EAX,EAX
006E4F83  74 0C                     JZ 0x006e4f91
006E4F85  89 5E 1C                  MOV dword ptr [ESI + 0x1c],EBX
006E4F88  5F                        POP EDI
006E4F89  5E                        POP ESI
006E4F8A  5B                        POP EBX
006E4F8B  C3                        RET
LAB_006e4f8c:
006E4F8C  89 5E 1C                  MOV dword ptr [ESI + 0x1c],EBX
LAB_006e4f8f:
006E4F8F  8B C7                     MOV EAX,EDI
LAB_006e4f91:
006E4F91  5F                        POP EDI
006E4F92  5E                        POP ESI
006E4F93  5B                        POP EBX
006E4F94  C3                        RET
