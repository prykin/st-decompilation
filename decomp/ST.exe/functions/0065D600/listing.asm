FUN_0065d600:
0065D600  8B C1                     MOV EAX,ECX
0065D602  8B 88 84 02 00 00         MOV ECX,dword ptr [EAX + 0x284]
0065D608  85 C9                     TEST ECX,ECX
0065D60A  74 06                     JZ 0x0065d612
0065D60C  50                        PUSH EAX
0065D60D  E8 6E 5A DA FF            CALL 0x00403080
LAB_0065d612:
0065D612  C3                        RET
