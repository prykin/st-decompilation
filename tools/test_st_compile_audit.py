import unittest
from pathlib import Path

from st_compile_audit import CompileAudit, SCHEMA_VERSION


class CompileAuditCommandTests(unittest.TestCase):
    def test_recovered_x86_source_uses_ilp32_data_model(self):
        audit = CompileAudit(
            source_tree=Path("/tmp/source-tree"),
            output=Path("/tmp/audit"),
            compiler="/usr/bin/clang++",
            jobs=1,
            error_limit=64,
            include_warnings=False,
        )

        command = audit.command(Path("/tmp/source-tree/source/unit.cpp"))

        self.assertEqual(2, SCHEMA_VERSION)
        self.assertIn("-m32", command)
        self.assertLess(command.index("-m32"), command.index("-fsyntax-only"))


if __name__ == "__main__":
    unittest.main()
