FUN_006e52d0:
006E52D0  55                        PUSH EBP
006E52D1  8B EC                     MOV EBP,ESP
006E52D3  83 EC 20                  SUB ESP,0x20
006E52D6  53                        PUSH EBX
006E52D7  56                        PUSH ESI
006E52D8  8B F1                     MOV ESI,ECX
006E52DA  33 DB                     XOR EBX,EBX
006E52DC  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
006E52DF  3B C3                     CMP EAX,EBX
006E52E1  74 56                     JZ 0x006e5339
006E52E3  39 58 0C                  CMP dword ptr [EAX + 0xc],EBX
006E52E6  74 42                     JZ 0x006e532a
006E52E8  57                        PUSH EDI
LAB_006e52e9:
006E52E9  C7 45 F0 03 00 00 00      MOV dword ptr [EBP + -0x10],0x3
006E52F0  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
006E52F3  3B CB                     CMP ECX,EBX
006E52F5  76 05                     JBE 0x006e52fc
006E52F7  8B 40 1C                  MOV EAX,dword ptr [EAX + 0x1c]
006E52FA  EB 02                     JMP 0x006e52fe
LAB_006e52fc:
006E52FC  33 C0                     XOR EAX,EAX
LAB_006e52fe:
006E52FE  8B 78 04                  MOV EDI,dword ptr [EAX + 0x4]
006E5301  8D 4D E0                  LEA ECX,[EBP + -0x20]
006E5304  51                        PUSH ECX
006E5305  8B CF                     MOV ECX,EDI
006E5307  8B 07                     MOV EAX,dword ptr [EDI]
006E5309  FF 10                     CALL dword ptr [EAX]
006E530B  8B 56 10                  MOV EDX,dword ptr [ESI + 0x10]
006E530E  53                        PUSH EBX
006E530F  52                        PUSH EDX
006E5310  E8 5B B9 FC FF            CALL 0x006b0c70
006E5315  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
006E5318  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
006E531B  50                        PUSH EAX
006E531C  E8 4F E6 FF FF            CALL 0x006e3970
006E5321  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
006E5324  39 58 0C                  CMP dword ptr [EAX + 0xc],EBX
006E5327  75 C0                     JNZ 0x006e52e9
006E5329  5F                        POP EDI
LAB_006e532a:
006E532A  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
006E532D  89 5E 0C                  MOV dword ptr [ESI + 0xc],EBX
006E5330  51                        PUSH ECX
006E5331  E8 DA 8D FC FF            CALL 0x006ae110
006E5336  89 5E 10                  MOV dword ptr [ESI + 0x10],EBX
LAB_006e5339:
006E5339  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006E533C  3B C3                     CMP EAX,EBX
006E533E  74 09                     JZ 0x006e5349
006E5340  50                        PUSH EAX
006E5341  E8 CA 8D FC FF            CALL 0x006ae110
006E5346  89 5E 04                  MOV dword ptr [ESI + 0x4],EBX
LAB_006e5349:
006E5349  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
006E534C  3B C3                     CMP EAX,EBX
006E534E  74 09                     JZ 0x006e5359
006E5350  50                        PUSH EAX
006E5351  E8 BA 8D FC FF            CALL 0x006ae110
006E5356  89 5E 08                  MOV dword ptr [ESI + 0x8],EBX
LAB_006e5359:
006E5359  5E                        POP ESI
006E535A  5B                        POP EBX
006E535B  8B E5                     MOV ESP,EBP
006E535D  5D                        POP EBP
006E535E  C3                        RET
