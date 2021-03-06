/*
 * Copyright (C) 2019, Matthias Hille <matthias.hille@tu-dresden.de>, 
 * Nils Asmussen <nils@os.inf.tu-dresden.de>
 * Economic rights: Technische Universitaet Dresden (Germany)
 *
 * This file is part of SemperOS.
 *
 * SemperOS is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * SemperOS is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License version 2 for more details.
 */

#pragma once

#include <test/TestSuite.h>

class FSTestSuite : public test::TestSuite {
private:
    class DirTestCase : public test::TestCase {
    public:
        explicit DirTestCase() : test::TestCase("Directories") {
        }
        virtual void run() override;
    };
    class FileTestCase : public test::TestCase {
    public:
        explicit FileTestCase() : test::TestCase("Files") {
        }
        virtual void run() override;
    };
    class BufferedFileTestCase : public test::TestCase {
    public:
        explicit BufferedFileTestCase() : test::TestCase("Buffered files") {
        }
        virtual void run() override;
    };

public:
    explicit FSTestSuite()
        : TestSuite("FS") {
        add(new DirTestCase());
        add(new FileTestCase());
        add(new BufferedFileTestCase());
    }
};
