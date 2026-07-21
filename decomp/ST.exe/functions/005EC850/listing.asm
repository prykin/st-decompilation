STAllPlayersC::FUN_005ec850:
005EC850  55                        PUSH EBP
005EC851  8B EC                     MOV EBP,ESP
005EC853  83 EC 20                  SUB ESP,0x20
005EC856  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005EC859  53                        PUSH EBX
005EC85A  56                        PUSH ESI
005EC85B  8B F1                     MOV ESI,ECX
005EC85D  33 DB                     XOR EBX,EBX
005EC85F  57                        PUSH EDI
005EC860  89 9E 18 03 00 00         MOV dword ptr [ESI + 0x318],EBX
005EC866  C7 86 D6 02 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x2d6],0xffffffff
005EC870  88 9E 16 03 00 00         MOV byte ptr [ESI + 0x316],BL
005EC876  8B 08                     MOV ECX,dword ptr [EAX]
005EC878  6A 44                     PUSH 0x44
005EC87A  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
005EC87D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005EC880  8D 78 04                  LEA EDI,[EAX + 0x4]
005EC883  E8 E8 E3 0B 00            CALL 0x006aac70
005EC888  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
005EC88B  33 C0                     XOR EAX,EAX
LAB_005ec88d:
005EC88D  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
005EC890  8B 0D 74 67 80 00         MOV ECX,dword ptr [0x00806774]
005EC896  89 0C 10                  MOV dword ptr [EAX + EDX*0x1],ECX
005EC899  83 C0 04                  ADD EAX,0x4
005EC89C  83 F8 44                  CMP EAX,0x44
005EC89F  7C EC                     JL 0x005ec88d
005EC8A1  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
005EC8A4  8B 0D 64 67 80 00         MOV ECX,dword ptr [0x00806764]
005EC8AA  8D 55 E0                  LEA EDX,[EBP + -0x20]
005EC8AD  57                        PUSH EDI
005EC8AE  89 48 24                  MOV dword ptr [EAX + 0x24],ECX
005EC8B1  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
005EC8B7  52                        PUSH EDX
005EC8B8  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
005EC8BB  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
005EC8BE  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
005EC8C1  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
005EC8C4  C7 45 F4 10 00 00 00      MOV dword ptr [EBP + -0xc],0x10
005EC8CB  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
005EC8CE  E8 D2 83 E1 FF            CALL 0x00404ca5
005EC8D3  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
005EC8D9  E8 EE 89 E1 FF            CALL 0x004052cc
005EC8DE  89 86 D6 02 00 00         MOV dword ptr [ESI + 0x2d6],EAX
005EC8E4  8D 45 E0                  LEA EAX,[EBP + -0x20]
005EC8E7  50                        PUSH EAX
005EC8E8  E8 73 E7 0B 00            CALL 0x006ab060
005EC8ED  83 BE 3A 02 00 00 08      CMP dword ptr [ESI + 0x23a],0x8
005EC8F4  75 54                     JNZ 0x005ec94a
005EC8F6  38 9E B9 02 00 00         CMP byte ptr [ESI + 0x2b9],BL
005EC8FC  74 4C                     JZ 0x005ec94a
005EC8FE  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
005EC904  8B 81 E4 00 00 00         MOV EAX,dword ptr [ECX + 0xe4]
005EC90A  8B 8E 8F 02 00 00         MOV ECX,dword ptr [ESI + 0x28f]
005EC910  2B C1                     SUB EAX,ECX
005EC912  83 C0 15                  ADD EAX,0x15
005EC915  3B C3                     CMP EAX,EBX
005EC917  7E 31                     JLE 0x005ec94a
005EC919  83 F8 15                  CMP EAX,0x15
005EC91C  7D 2C                     JGE 0x005ec94a
005EC91E  8B 96 C6 02 00 00         MOV EDX,dword ptr [ESI + 0x2c6]
005EC924  8B 8E BE 02 00 00         MOV ECX,dword ptr [ESI + 0x2be]
005EC92A  50                        PUSH EAX
005EC92B  8B 86 C2 02 00 00         MOV EAX,dword ptr [ESI + 0x2c2]
005EC931  52                        PUSH EDX
005EC932  50                        PUSH EAX
005EC933  51                        PUSH ECX
005EC934  6A 01                     PUSH 0x1
005EC936  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
005EC93C  E8 8B 89 E1 FF            CALL 0x004052cc
005EC941  50                        PUSH EAX
005EC942  E8 5E 88 E1 FF            CALL 0x004051a5
005EC947  83 C4 18                  ADD ESP,0x18
LAB_005ec94a:
005EC94A  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005EC94D  03 F9                     ADD EDI,ECX
005EC94F  8B CE                     MOV ECX,ESI
005EC951  8B 1F                     MOV EBX,dword ptr [EDI]
005EC953  83 C7 04                  ADD EDI,0x4
005EC956  57                        PUSH EDI
005EC957  E8 C3 8B E1 FF            CALL 0x0040551f
005EC95C  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005EC95F  5F                        POP EDI
005EC960  5E                        POP ESI
005EC961  8D 04 13                  LEA EAX,[EBX + EDX*0x1]
005EC964  5B                        POP EBX
005EC965  8B E5                     MOV ESP,EBP
005EC967  5D                        POP EBP
005EC968  C2 04 00                  RET 0x4
