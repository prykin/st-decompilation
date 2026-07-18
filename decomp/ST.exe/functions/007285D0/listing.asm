FUN_007285d0:
007285D0  55                        PUSH EBP
007285D1  8B EC                     MOV EBP,ESP
007285D3  56                        PUSH ESI
007285D4  57                        PUSH EDI
007285D5  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
007285D8  8B 4F 24                  MOV ECX,dword ptr [EDI + 0x24]
007285DB  81 E1 00 00 FF FF         AND ECX,0xffff0000
007285E1  3B 0D 5C 70 85 00         CMP ECX,dword ptr [0x0085705c]
007285E7  7C 06                     JL 0x007285ef
007285E9  8B 0D 5C 70 85 00         MOV ECX,dword ptr [0x0085705c]
LAB_007285ef:
007285EF  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
007285F2  8B 7E 24                  MOV EDI,dword ptr [ESI + 0x24]
007285F5  81 E7 00 00 FF FF         AND EDI,0xffff0000
007285FB  3B 3D DC 70 85 00         CMP EDI,dword ptr [0x008570dc]
00728601  7D 06                     JGE 0x00728609
00728603  8B 3D DC 70 85 00         MOV EDI,dword ptr [0x008570dc]
LAB_00728609:
00728609  2B CF                     SUB ECX,EDI
0072860B  7E 20                     JLE 0x0072862d
0072860D  C1 E9 10                  SHR ECX,0x10
00728610  C1 EF 10                  SHR EDI,0x10
00728613  A1 90 70 85 00            MOV EAX,[0x00857090]
00728618  F7 25 98 70 85 00         MUL dword ptr [0x00857098]
0072861E  03 F8                     ADD EDI,EAX
00728620  03 3D 8C 70 85 00         ADD EDI,dword ptr [0x0085708c]
00728626  A0 F8 70 85 00            MOV AL,[0x008570f8]
0072862B  F3 AA                     STOSB.REP ES:EDI
LAB_0072862d:
0072862D  5F                        POP EDI
0072862E  5E                        POP ESI
0072862F  5D                        POP EBP
00728630  C3                        RET
