FUN_005b6730:
005B6730  55                        PUSH EBP
005B6731  8B EC                     MOV EBP,ESP
005B6733  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
005B6736  85 C0                     TEST EAX,EAX
005B6738  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005B673B  74 10                     JZ 0x005b674d
005B673D  83 F8 03                  CMP EAX,0x3
005B6740  75 0B                     JNZ 0x005b674d
005B6742  C7 41 18 00 00 00 00      MOV dword ptr [ECX + 0x18],0x0
005B6749  5D                        POP EBP
005B674A  C2 0C 00                  RET 0xc
LAB_005b674d:
005B674D  83 F8 04                  CMP EAX,0x4
005B6750  75 07                     JNZ 0x005b6759
005B6752  C7 41 18 01 00 00 00      MOV dword ptr [ECX + 0x18],0x1
LAB_005b6759:
005B6759  F6 05 01 73 80 00 08      TEST byte ptr [0x00807301],0x8
005B6760  74 15                     JZ 0x005b6777
005B6762  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
005B6765  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
005B6768  6A 00                     PUSH 0x0
005B676A  51                        PUSH ECX
005B676B  52                        PUSH EDX
005B676C  50                        PUSH EAX
005B676D  B9 58 76 80 00            MOV ECX,0x807658
005B6772  E8 5A C8 E4 FF            CALL 0x00402fd1
LAB_005b6777:
005B6777  5D                        POP EBP
005B6778  C2 0C 00                  RET 0xc
