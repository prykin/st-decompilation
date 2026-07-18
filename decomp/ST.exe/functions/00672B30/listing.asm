FUN_00672b30:
00672B30  A1 60 75 85 00            MOV EAX,[0x00857560]
00672B35  85 C0                     TEST EAX,EAX
00672B37  74 0F                     JZ 0x00672b48
00672B39  50                        PUSH EAX
00672B3A  A1 4C 19 81 00            MOV EAX,[0x0081194c]
00672B3F  FF 50 0C                  CALL dword ptr [EAX + 0xc]
00672B42  25 FF 00 00 00            AND EAX,0xff
00672B47  C3                        RET
LAB_00672b48:
00672B48  33 C0                     XOR EAX,EAX
00672B4A  C3                        RET
