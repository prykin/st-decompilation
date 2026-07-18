FUN_006e9000:
006E9000  55                        PUSH EBP
006E9001  8B EC                     MOV EBP,ESP
006E9003  56                        PUSH ESI
006E9004  57                        PUSH EDI
006E9005  8B F9                     MOV EDI,ECX
006E9007  6A 2C                     PUSH 0x2c
006E9009  E8 02 1C FC FF            CALL 0x006aac10
006E900E  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006E9011  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006E9014  D9 45 24                  FLD float ptr [EBP + 0x24]
006E9017  8B F0                     MOV ESI,EAX
006E9019  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006E901C  89 46 08                  MOV dword ptr [ESI + 0x8],EAX
006E901F  89 4E 0C                  MOV dword ptr [ESI + 0xc],ECX
006E9022  89 56 10                  MOV dword ptr [ESI + 0x10],EDX
006E9025  DC 8F 08 03 00 00         FMUL double ptr [EDI + 0x308]
006E902B  E8 58 52 04 00            CALL 0x0072e288
006E9030  66 8B 4D 10               MOV CX,word ptr [EBP + 0x10]
006E9034  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006E9037  89 46 18                  MOV dword ptr [ESI + 0x18],EAX
006E903A  66 8B 45 0C               MOV AX,word ptr [EBP + 0xc]
006E903E  66 89 4E 1E               MOV word ptr [ESI + 0x1e],CX
006E9042  66 89 46 1C               MOV word ptr [ESI + 0x1c],AX
006E9046  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006E9049  8D 8F 94 02 00 00         LEA ECX,[EDI + 0x294]
006E904F  56                        PUSH ESI
006E9050  51                        PUSH ECX
006E9051  89 56 20                  MOV dword ptr [ESI + 0x20],EDX
006E9054  89 46 24                  MOV dword ptr [ESI + 0x24],EAX
006E9057  E8 B4 08 FD FF            CALL 0x006b9910
006E905C  56                        PUSH ESI
006E905D  8B CF                     MOV ECX,EDI
006E905F  E8 3C FE FF FF            CALL 0x006e8ea0
006E9064  85 C0                     TEST EAX,EAX
006E9066  74 0A                     JZ 0x006e9072
006E9068  C7 87 34 01 00 00 01 00 00 00  MOV dword ptr [EDI + 0x134],0x1
LAB_006e9072:
006E9072  8B C6                     MOV EAX,ESI
006E9074  5F                        POP EDI
006E9075  5E                        POP ESI
006E9076  5D                        POP EBP
006E9077  C2 20 00                  RET 0x20
