FUN_004ce770:
004CE770  55                        PUSH EBP
004CE771  8B EC                     MOV EBP,ESP
004CE773  83 7D 08 01               CMP dword ptr [EBP + 0x8],0x1
004CE777  75 0F                     JNZ 0x004ce788
004CE779  8B 81 D0 04 00 00         MOV EAX,dword ptr [ECX + 0x4d0]
004CE77F  85 C0                     TEST EAX,EAX
004CE781  75 05                     JNZ 0x004ce788
004CE783  E8 20 53 F3 FF            CALL 0x00403aa8
LAB_004ce788:
004CE788  33 C0                     XOR EAX,EAX
004CE78A  5D                        POP EBP
004CE78B  C2 0C 00                  RET 0xc
