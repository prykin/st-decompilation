FUN_005fcff0:
005FCFF0  55                        PUSH EBP
005FCFF1  8B EC                     MOV EBP,ESP
005FCFF3  81 EC 58 01 00 00         SUB ESP,0x158
005FCFF9  56                        PUSH ESI
005FCFFA  57                        PUSH EDI
005FCFFB  B9 55 00 00 00            MOV ECX,0x55
005FD000  33 C0                     XOR EAX,EAX
005FD002  8D BD A8 FE FF FF         LEA EDI,[EBP + 0xfffffea8]
005FD008  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
005FD00B  F3 AB                     STOSD.REP ES:EDI
005FD00D  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
005FD010  AA                        STOSB ES:EDI
005FD011  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005FD014  81 E1 FF FF 00 00         AND ECX,0xffff
005FD01A  89 85 AC FE FF FF         MOV dword ptr [EBP + 0xfffffeac],EAX
005FD020  B8 01 00 00 00            MOV EAX,0x1
005FD025  89 85 B0 FE FF FF         MOV dword ptr [EBP + 0xfffffeb0],EAX
005FD02B  89 85 B4 FE FF FF         MOV dword ptr [EBP + 0xfffffeb4],EAX
005FD031  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
005FD034  89 95 C8 FE FF FF         MOV dword ptr [EBP + 0xfffffec8],EDX
005FD03A  89 85 CC FE FF FF         MOV dword ptr [EBP + 0xfffffecc],EAX
005FD040  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
005FD043  C1 E1 10                  SHL ECX,0x10
005FD046  89 8D C4 FE FF FF         MOV dword ptr [EBP + 0xfffffec4],ECX
005FD04C  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
005FD04F  89 45 F1                  MOV dword ptr [EBP + -0xf],EAX
005FD052  C7 85 A8 FE FF FF A4 01 00 00  MOV dword ptr [EBP + 0xfffffea8],0x1a4
005FD05C  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
005FD05F  C7 85 B8 FE FF FF 00 00 00 00  MOV dword ptr [EBP + 0xfffffeb8],0x0
005FD069  C7 85 BC FE FF FF FE 00 00 00  MOV dword ptr [EBP + 0xfffffebc],0xfe
005FD073  C7 85 D6 FE FF FF 00 00 00 00  MOV dword ptr [EBP + 0xfffffed6],0x0
005FD07D  8D 54 C8 64               LEA EDX,[EAX + ECX*0x8 + 0x64]
005FD081  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
005FD084  66 89 95 D0 FE FF FF      MOV word ptr [EBP + 0xfffffed0],DX
005FD08B  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
005FD08E  8D 14 89                  LEA EDX,[ECX + ECX*0x4]
005FD091  89 4D F5                  MOV dword ptr [EBP + -0xb],ECX
005FD094  89 85 C0 FE FF FF         MOV dword ptr [EBP + 0xfffffec0],EAX
005FD09A  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
005FD09D  8D 54 D1 64               LEA EDX,[ECX + EDX*0x8 + 0x64]
005FD0A1  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
005FD0A4  66 89 95 D2 FE FF FF      MOV word ptr [EBP + 0xfffffed2],DX
005FD0AB  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
005FD0AE  89 55 F9                  MOV dword ptr [EBP + -0x7],EDX
005FD0B1  89 8D DA FE FF FF         MOV dword ptr [EBP + 0xfffffeda],ECX
005FD0B7  8D 34 92                  LEA ESI,[EDX + EDX*0x4]
005FD0BA  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
005FD0BD  85 D2                     TEST EDX,EDX
005FD0BF  8D 34 B6                  LEA ESI,[ESI + ESI*0x4]
005FD0C2  8D 34 F5 64 00 00 00      LEA ESI,[ESI*0x8 + 0x64]
005FD0C9  66 89 B5 D4 FE FF FF      MOV word ptr [EBP + 0xfffffed4],SI
005FD0D0  74 51                     JZ 0x005fd123
005FD0D2  8B FA                     MOV EDI,EDX
005FD0D4  83 C9 FF                  OR ECX,0xffffffff
005FD0D7  33 C0                     XOR EAX,EAX
005FD0D9  F2 AE                     SCASB.REPNE ES:EDI
005FD0DB  F7 D1                     NOT ECX
005FD0DD  49                        DEC ECX
005FD0DE  83 F9 0E                  CMP ECX,0xe
005FD0E1  77 27                     JA 0x005fd10a
005FD0E3  8B FA                     MOV EDI,EDX
005FD0E5  83 C9 FF                  OR ECX,0xffffffff
005FD0E8  F2 AE                     SCASB.REPNE ES:EDI
005FD0EA  8D B5 DE FE FF FF         LEA ESI,[EBP + 0xfffffede]
005FD0F0  F7 D1                     NOT ECX
005FD0F2  2B F9                     SUB EDI,ECX
005FD0F4  8B C6                     MOV EAX,ESI
005FD0F6  8B D1                     MOV EDX,ECX
005FD0F8  8B F7                     MOV ESI,EDI
005FD0FA  8B F8                     MOV EDI,EAX
005FD0FC  C1 E9 02                  SHR ECX,0x2
005FD0FF  F3 A5                     MOVSD.REP ES:EDI,ESI
005FD101  8B CA                     MOV ECX,EDX
005FD103  83 E1 03                  AND ECX,0x3
005FD106  F3 A4                     MOVSB.REP ES:EDI,ESI
005FD108  EB 19                     JMP 0x005fd123
LAB_005fd10a:
005FD10A  6A 0E                     PUSH 0xe
005FD10C  8D 8D DE FE FF FF         LEA ECX,[EBP + 0xfffffede]
005FD112  52                        PUSH EDX
005FD113  51                        PUSH ECX
005FD114  E8 27 12 13 00            CALL 0x0072e340
005FD119  83 C4 0C                  ADD ESP,0xc
005FD11C  C6 85 EC FE FF FF 00      MOV byte ptr [EBP + 0xfffffeec],0x0
LAB_005fd123:
005FD123  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
005FD129  8D 85 A8 FE FF FF         LEA EAX,[EBP + 0xfffffea8]
005FD12F  6A 00                     PUSH 0x0
005FD131  50                        PUSH EAX
005FD132  8B 11                     MOV EDX,dword ptr [ECX]
005FD134  6A 00                     PUSH 0x0
005FD136  6A 00                     PUSH 0x0
005FD138  68 57 01 00 00            PUSH 0x157
005FD13D  FF 52 08                  CALL dword ptr [EDX + 0x8]
005FD140  5F                        POP EDI
005FD141  5E                        POP ESI
005FD142  8B E5                     MOV ESP,EBP
005FD144  5D                        POP EBP
005FD145  C3                        RET
