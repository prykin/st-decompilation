FUN_005ee670:
005EE670  56                        PUSH ESI
005EE671  8B F1                     MOV ESI,ECX
005EE673  68 D0 07 00 00            PUSH 0x7d0
005EE678  8B 06                     MOV EAX,dword ptr [ESI]
005EE67A  FF 90 24 01 00 00         CALL dword ptr [EAX + 0x124]
005EE680  85 C0                     TEST EAX,EAX
005EE682  74 2C                     JZ 0x005ee6b0
005EE684  6A 00                     PUSH 0x0
005EE686  6A 01                     PUSH 0x1
005EE688  8B CE                     MOV ECX,ESI
005EE68A  E8 9E 38 E1 FF            CALL 0x00401f2d
005EE68F  C6 86 0E 03 00 00 FF      MOV byte ptr [ESI + 0x30e],0xff
005EE696  66 C7 86 0F 03 00 00 00 00  MOV word ptr [ESI + 0x30f],0x0
005EE69F  C6 86 0D 03 00 00 01      MOV byte ptr [ESI + 0x30d],0x1
005EE6A6  C7 86 3A 02 00 00 05 00 00 00  MOV dword ptr [ESI + 0x23a],0x5
LAB_005ee6b0:
005EE6B0  5E                        POP ESI
005EE6B1  C3                        RET
