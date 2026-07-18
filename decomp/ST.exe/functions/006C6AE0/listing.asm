FUN_006c6ae0:
006C6AE0  55                        PUSH EBP
006C6AE1  8B EC                     MOV EBP,ESP
006C6AE3  83 EC 10                  SUB ESP,0x10
006C6AE6  53                        PUSH EBX
006C6AE7  56                        PUSH ESI
006C6AE8  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006C6AEB  57                        PUSH EDI
006C6AEC  8D 45 F8                  LEA EAX,[EBP + -0x8]
006C6AEF  6A 06                     PUSH 0x6
006C6AF1  50                        PUSH EAX
006C6AF2  56                        PUSH ESI
006C6AF3  FF 56 42                  CALL dword ptr [ESI + 0x42]
006C6AF6  83 F8 06                  CMP EAX,0x6
006C6AF9  0F 85 C5 00 00 00         JNZ 0x006c6bc4
006C6AFF  66 81 7D F8 47 49         CMP word ptr [EBP + -0x8],0x4947
006C6B05  0F 85 BD 00 00 00         JNZ 0x006c6bc8
006C6B0B  66 81 7D FA 46 38         CMP word ptr [EBP + -0x6],0x3846
006C6B11  0F 85 B1 00 00 00         JNZ 0x006c6bc8
006C6B17  66 8B 45 FC               MOV AX,word ptr [EBP + -0x4]
006C6B1B  66 3D 37 61               CMP AX,0x6137
006C6B1F  74 0A                     JZ 0x006c6b2b
006C6B21  66 3D 39 61               CMP AX,0x6139
006C6B25  0F 85 9D 00 00 00         JNZ 0x006c6bc8
LAB_006c6b2b:
006C6B2B  8D 4D F0                  LEA ECX,[EBP + -0x10]
006C6B2E  6A 07                     PUSH 0x7
006C6B30  51                        PUSH ECX
006C6B31  56                        PUSH ESI
006C6B32  FF 56 42                  CALL dword ptr [ESI + 0x42]
006C6B35  83 F8 07                  CMP EAX,0x7
006C6B38  0F 85 86 00 00 00         JNZ 0x006c6bc4
006C6B3E  0F BF 45 F2               MOVSX EAX,word ptr [EBP + -0xe]
006C6B42  0F BF 55 F0               MOVSX EDX,word ptr [EBP + -0x10]
006C6B46  89 46 0C                  MOV dword ptr [ESI + 0xc],EAX
006C6B49  8A 45 F4                  MOV AL,byte ptr [EBP + -0xc]
006C6B4C  8A C8                     MOV CL,AL
006C6B4E  89 56 08                  MOV dword ptr [ESI + 0x8],EDX
006C6B51  8A 55 F5                  MOV DL,byte ptr [EBP + -0xb]
006C6B54  33 FF                     XOR EDI,EDI
006C6B56  80 E1 07                  AND CL,0x7
006C6B59  88 56 11                  MOV byte ptr [ESI + 0x11],DL
006C6B5C  A8 80                     TEST AL,0x80
006C6B5E  88 4E 10                  MOV byte ptr [ESI + 0x10],CL
006C6B61  74 48                     JZ 0x006c6bab
006C6B63  41                        INC ECX
006C6B64  B8 01 00 00 00            MOV EAX,0x1
006C6B69  D3 E0                     SHL EAX,CL
006C6B6B  8D 1C 40                  LEA EBX,[EAX + EAX*0x2]
006C6B6E  53                        PUSH EBX
006C6B6F  E8 FC 8F FF FF            CALL 0x006bfb70
006C6B74  85 C0                     TEST EAX,EAX
006C6B76  89 46 12                  MOV dword ptr [ESI + 0x12],EAX
006C6B79  75 0E                     JNZ 0x006c6b89
006C6B7B  5F                        POP EDI
006C6B7C  5E                        POP ESI
006C6B7D  B8 FE FF FF FF            MOV EAX,0xfffffffe
006C6B82  5B                        POP EBX
006C6B83  8B E5                     MOV ESP,EBP
006C6B85  5D                        POP EBP
006C6B86  C2 04 00                  RET 0x4
LAB_006c6b89:
006C6B89  53                        PUSH EBX
006C6B8A  50                        PUSH EAX
006C6B8B  56                        PUSH ESI
006C6B8C  FF 56 42                  CALL dword ptr [ESI + 0x42]
006C6B8F  8B F8                     MOV EDI,EAX
006C6B91  3B FB                     CMP EDI,EBX
006C6B93  74 14                     JZ 0x006c6ba9
006C6B95  8D 46 12                  LEA EAX,[ESI + 0x12]
006C6B98  50                        PUSH EAX
006C6B99  E8 C2 44 FE FF            CALL 0x006ab060
006C6B9E  85 FF                     TEST EDI,EDI
006C6BA0  7C 09                     JL 0x006c6bab
006C6BA2  BF FB FF FF FF            MOV EDI,0xfffffffb
006C6BA7  EB 02                     JMP 0x006c6bab
LAB_006c6ba9:
006C6BA9  33 FF                     XOR EDI,EDI
LAB_006c6bab:
006C6BAB  56                        PUSH ESI
006C6BAC  FF 56 4A                  CALL dword ptr [ESI + 0x4a]
006C6BAF  89 46 52                  MOV dword ptr [ESI + 0x52],EAX
006C6BB2  8B C7                     MOV EAX,EDI
006C6BB4  C7 46 56 04 00 00 00      MOV dword ptr [ESI + 0x56],0x4
006C6BBB  5F                        POP EDI
006C6BBC  5E                        POP ESI
006C6BBD  5B                        POP EBX
006C6BBE  8B E5                     MOV ESP,EBP
006C6BC0  5D                        POP EBP
006C6BC1  C2 04 00                  RET 0x4
LAB_006c6bc4:
006C6BC4  85 C0                     TEST EAX,EAX
006C6BC6  7C 05                     JL 0x006c6bcd
LAB_006c6bc8:
006C6BC8  B8 FB FF FF FF            MOV EAX,0xfffffffb
LAB_006c6bcd:
006C6BCD  5F                        POP EDI
006C6BCE  5E                        POP ESI
006C6BCF  5B                        POP EBX
006C6BD0  8B E5                     MOV ESP,EBP
006C6BD2  5D                        POP EBP
006C6BD3  C2 04 00                  RET 0x4
