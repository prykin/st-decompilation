FUN_00694070:
00694070  55                        PUSH EBP
00694071  8B EC                     MOV EBP,ESP
00694073  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00694076  50                        PUSH EAX
00694077  E8 97 F8 D6 FF            CALL 0x00403913
0069407C  85 C0                     TEST EAX,EAX
0069407E  74 14                     JZ 0x00694094
00694080  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00694083  8B 11                     MOV EDX,dword ptr [ECX]
00694085  89 50 24                  MOV dword ptr [EAX + 0x24],EDX
00694088  8B 49 04                  MOV ECX,dword ptr [ECX + 0x4]
0069408B  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0069408E  89 48 28                  MOV dword ptr [EAX + 0x28],ECX
00694091  89 50 2C                  MOV dword ptr [EAX + 0x2c],EDX
LAB_00694094:
00694094  5D                        POP EBP
00694095  C2 0C 00                  RET 0xc
