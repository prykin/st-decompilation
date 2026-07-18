FUN_006c7b20:
006C7B20  55                        PUSH EBP
006C7B21  8B EC                     MOV EBP,ESP
006C7B23  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006C7B26  53                        PUSH EBX
006C7B27  57                        PUSH EDI
006C7B28  8B 78 2E                  MOV EDI,dword ptr [EAX + 0x2e]
006C7B2B  8B 4F 08                  MOV ECX,dword ptr [EDI + 0x8]
006C7B2E  85 C9                     TEST ECX,ECX
006C7B30  7D 02                     JGE 0x006c7b34
006C7B32  F7 D9                     NEG ECX
LAB_006c7b34:
006C7B34  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006C7B37  8B 58 04                  MOV EBX,dword ptr [EAX + 0x4]
006C7B3A  03 D3                     ADD EDX,EBX
006C7B3C  3B D1                     CMP EDX,ECX
006C7B3E  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
006C7B41  7D 3B                     JGE 0x006c7b7e
006C7B43  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
006C7B46  8B 57 04                  MOV EDX,dword ptr [EDI + 0x4]
006C7B49  56                        PUSH ESI
006C7B4A  8B 30                     MOV ESI,dword ptr [EAX]
006C7B4C  8D 1C 31                  LEA EBX,[ECX + ESI*0x1]
006C7B4F  3B DA                     CMP EBX,EDX
006C7B51  7E 04                     JLE 0x006c7b57
006C7B53  2B D6                     SUB EDX,ESI
006C7B55  8B CA                     MOV ECX,EDX
LAB_006c7b57:
006C7B57  8B 50 22                  MOV EDX,dword ptr [EAX + 0x22]
006C7B5A  6A 01                     PUSH 0x1
006C7B5C  51                        PUSH ECX
006C7B5D  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006C7B60  6A 00                     PUSH 0x0
006C7B62  6A 00                     PUSH 0x0
006C7B64  51                        PUSH ECX
006C7B65  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006C7B68  52                        PUSH EDX
006C7B69  8B 50 32                  MOV EDX,dword ptr [EAX + 0x32]
006C7B6C  51                        PUSH ECX
006C7B6D  56                        PUSH ESI
006C7B6E  52                        PUSH EDX
006C7B6F  57                        PUSH EDI
006C7B70  E8 7B DA FE FF            CALL 0x006b55f0
006C7B75  5E                        POP ESI
006C7B76  5F                        POP EDI
006C7B77  33 C0                     XOR EAX,EAX
006C7B79  5B                        POP EBX
006C7B7A  5D                        POP EBP
006C7B7B  C2 0C 00                  RET 0xc
LAB_006c7b7e:
006C7B7E  5F                        POP EDI
006C7B7F  83 C8 FF                  OR EAX,0xffffffff
006C7B82  5B                        POP EBX
006C7B83  5D                        POP EBP
006C7B84  C2 0C 00                  RET 0xc
