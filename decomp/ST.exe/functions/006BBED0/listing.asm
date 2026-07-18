FUN_006bbed0:
006BBED0  55                        PUSH EBP
006BBED1  8B EC                     MOV EBP,ESP
006BBED3  83 EC 7C                  SUB ESP,0x7c
006BBED6  53                        PUSH EBX
006BBED7  56                        PUSH ESI
006BBED8  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006BBEDB  33 DB                     XOR EBX,EBX
006BBEDD  57                        PUSH EDI
006BBEDE  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
006BBEE1  89 5D A8                  MOV dword ptr [EBP + -0x58],EBX
006BBEE4  89 5D 94                  MOV dword ptr [EBP + -0x6c],EBX
006BBEE7  C7 45 84 7C 00 00 00      MOV dword ptr [EBP + -0x7c],0x7c
LAB_006bbeee:
006BBEEE  8B 06                     MOV EAX,dword ptr [ESI]
006BBEF0  6A 00                     PUSH 0x0
006BBEF2  8D 4D 84                  LEA ECX,[EBP + -0x7c]
006BBEF5  6A 21                     PUSH 0x21
006BBEF7  51                        PUSH ECX
006BBEF8  57                        PUSH EDI
006BBEF9  56                        PUSH ESI
006BBEFA  FF 50 64                  CALL dword ptr [EAX + 0x64]
006BBEFD  3D A0 00 76 88            CMP EAX,0x887600a0
006BBF02  74 07                     JZ 0x006bbf0b
006BBF04  3D AE 01 76 88            CMP EAX,0x887601ae
006BBF09  75 13                     JNZ 0x006bbf1e
LAB_006bbf0b:
006BBF0B  85 DB                     TEST EBX,EBX
006BBF0D  75 0F                     JNZ 0x006bbf1e
006BBF0F  6A 02                     PUSH 0x2
006BBF11  FF 15 6C BC 85 00         CALL dword ptr [0x0085bc6c]
006BBF17  BB 01 00 00 00            MOV EBX,0x1
006BBF1C  EB D0                     JMP 0x006bbeee
LAB_006bbf1e:
006BBF1E  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006BBF21  5F                        POP EDI
006BBF22  5E                        POP ESI
006BBF23  5B                        POP EBX
006BBF24  85 C0                     TEST EAX,EAX
006BBF26  75 13                     JNZ 0x006bbf3b
006BBF28  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
006BBF2B  89 0A                     MOV dword ptr [EDX],ECX
006BBF2D  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006BBF30  8B 4D 94                  MOV ECX,dword ptr [EBP + -0x6c]
006BBF33  89 0A                     MOV dword ptr [EDX],ECX
006BBF35  8B E5                     MOV ESP,EBP
006BBF37  5D                        POP EBP
006BBF38  C2 10 00                  RET 0x10
LAB_006bbf3b:
006BBF3B  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006BBF3E  C7 02 00 00 00 00         MOV dword ptr [EDX],0x0
006BBF44  C7 01 00 00 00 00         MOV dword ptr [ECX],0x0
006BBF4A  8B E5                     MOV ESP,EBP
006BBF4C  5D                        POP EBP
006BBF4D  C2 10 00                  RET 0x10
